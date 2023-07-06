using System.Collections.Generic;
using UnityEngine;
using System;
using TMPro;

public class Model : MonoBehaviour
{

    public List<Target> team1TargetsAlife = new List<Target>();
    public List<Target> team2TargetsAlife = new List<Target>();
    
    private List<Tower> towers1 = new List<Tower>();
    private List<Tower> towers2 = new List<Tower>();

    [SerializeField] Card testCard;
    [SerializeField] Camera cam;

    [SerializeField] Transform targetParent;

    private bool player = false; // Multiplayer

    private bool won = false;
    [SerializeField] private GameObject wonScreen;

    [SerializeField] Canvas ui;

    private ElixirBar elixirBar;

    private void Start()
    {
        elixirBar = ui.transform.Find("ElixirBar").GetComponent<ElixirBar>();
    }

    public void CheckForVictory(Tower t)
    {
        List<Tower> toCheck = t.GetTeam() ? towers1 : towers2;
        int count = 0;
        foreach (Tower tower in toCheck) {
            if (tower == t || tower == null) continue;
            count++;
        }

        if (count == 0)
        {
            won = true;
            GameObject screen = Instantiate(wonScreen, ui.transform);
            string text = t.GetTeam() ? "Player 1 won" : "Player 2 won";
            screen.transform.Find("Won").GetComponent<TextMeshProUGUI>().text = text;
        }
    }

    public Target GetNearestTargetFrom(Target attacker)
    {
        if (won) { return attacker; }
        List<Target> validTargets = GetValidTargets(attacker);

        float minimumDistance = float.MaxValue;
        Target closestTargetYet = null;
        foreach (Target t in validTargets)
        {
            float dist = Vector3.Distance(t.gameObject.transform.position, attacker.gameObject.transform.position);

            if (dist < minimumDistance)
            {
                minimumDistance = dist;
                closestTargetYet = t;
            }
        }

        return closestTargetYet;

    }

    public void DamageAllTargetsInRadius(Vector3 origin, float radius, float damage, Target attacker)
    {
        if (won) return;
        List<Target> valid = GetValidTargets(attacker);
        List<Target> toKill = new List<Target>();

        foreach (Target target in valid)
        {
            Vector3 targetPos = target.GetAttackPoint().position;
            float distance = Vector3.Distance(origin, targetPos);
            if (distance < radius)
            {
                float damageDealt = (distance / radius) * damage;
                if (target.TakeDamage((int)damageDealt, false))
                {
                    toKill.Add(target);
                }
            }
        }

        foreach (Target target in toKill)
        {
            target.Kill();
        }
    }

    public List<Target> GetValidTargets(Target attacker)
    {
        List<Target> targetList;

        if (attacker.GetTeam() == true) targetList = team1TargetsAlife;
        else targetList = team2TargetsAlife;

        List<Target> validTargets = new List<Target>();

        // Buildings can attack any Target
        if (attacker is Building) return targetList;

        foreach (Target t in targetList)
        {
            // Buildings are ALWAYS attackable
            if (t is Building)
            {
                validTargets.Add(t);
                break;
            }

            if(t is Entity)
            {
                Entity attackEntity = (Entity)attacker;
                Entity targetEntity = (Entity)t;

                if (targetEntity.canAttackEntities == false) break;
                if (targetEntity.isInvisble) break;

                if(targetEntity.IsInAir() && attackEntity.canAttackAir)
                {
                    targetList.Add(t);
                    break;
                }
                if (!targetEntity.IsInAir() && attackEntity.canAttackFloor)
                {
                    targetList.Add(t);
                    break;
                }
            }
            
        }

        //if (targetList.Count == 0) return null;

        return targetList;
    }

    // Event called when any object is killed
    public void OnKilled(object source, EventArgs args)
    {
        if (won) return;
        Target killed = (Target)source;
        bool team = killed.GetTeam();
        (team ? team2TargetsAlife : team1TargetsAlife).Remove(killed);
        List<Target> toUpdate = team ? team1TargetsAlife : team2TargetsAlife;
        foreach (Target t in toUpdate) {
            if (t.Equals(source)) continue;
            if (t is Entity)
            {
                Entity entity = (Entity)t;  
                // look for new destination and stop attacking the old one
                if (entity.GetDestination().Equals(killed)) {
                    entity.RecalculateDestination();
                    entity.StopAttack();
                    entity.EnableAgent();
                }
            }
        }
    }

    // Just a test for spawning entites dont worry this is going to be updated!

    private void Update()
    {
        
    }

    // Later we will do this the other way around the model should spawn targets, for now we do this the other way around for testing porpousessdasda

    public void AddTarget(Target t)
    {
        if (t.GetTeam() == false) team1TargetsAlife.Add(t);
        if (t.GetTeam() == true) team2TargetsAlife.Add(t);
    }

    // Spawning entites based of cards

    public void SpawnTarget(Card info, Vector3 pos , bool team)
    {
        if (elixirBar.ReduceElixir(info.elexCost))
        {
            Instantiate(info.fighter, pos, Quaternion.Euler(0, 0, 0), targetParent).GetComponent<Target>().Setup(team);
        }
    }

    public void AddTower(Tower t)
    {
        bool team = t.GetTeam();
        if (team)
        {
            towers1.Add(t);
        } else { towers2.Add(t);}
    }
}
