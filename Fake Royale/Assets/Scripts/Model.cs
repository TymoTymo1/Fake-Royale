using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Model : MonoBehaviour
{
    private Tower[] towers = new Tower[6];
    public List<Entity> team1Cards;
    public List<Entity> team2Cards;

    public void TakeDamage(int id, float damage)
    {
        towers[id].TakeDamage(damage);
    }

    public void AddTower(Tower tower)
    {
        towers[tower.GetId()] = tower;
    }

    public Tower GetNearestEnemyTowerFrom(Transform from, bool team)
    {
        int minId = -1;
        float minDistance = float.MaxValue;
        foreach (Tower t in towers)
        {
            if (t.GetTeam() == team) continue;
            float distance = Vector3.Distance(t.transform.position, from.position);
            if (distance < minDistance)
            {
                minDistance = distance;
                minId = t.GetId();
            }
        }

        return towers[minId];
    }
}
