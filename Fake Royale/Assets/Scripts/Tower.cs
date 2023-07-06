using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tower : Building
{

    public int id;
    // Getting the model for later actions

    private Target target;
    private const float cooldown = 1f;
    private float timer = cooldown;

    [SerializeField]  private Transform canon;
    [SerializeField]  private Transform canonWithWeels;

    [SerializeField] GameObject bullet;

    private float range = 20f;

    private void RecalculateDestination()
    {
        target = model.GetNearestTargetFrom(this);
    }

    IEnumerator CalulateDestination()
    {
        while (isActiveAndEnabled)
        {
            RecalculateDestination();
            yield return new WaitForSeconds(0.2f);
        }
    }

    private void Update()
    {
        if (target == null || Vector3.Distance(attackPoint.position, target.GetAttackPoint().position) > range)
        {
            return;
        }

        // Rotation on Y-Axis
        Vector3 targetPositionSameHeight = new Vector3(target.GetAttackPoint().position.x, canonWithWeels.transform.position.y, target.GetAttackPoint().position.z);

        Quaternion wheelsRotation = Quaternion.LookRotation(canonWithWeels.transform.position - targetPositionSameHeight);
        canonWithWeels.transform.rotation = wheelsRotation;

        // Rotation on X-Axis


        timer -= Time.deltaTime;
        if (timer <= 0f)
        {
            ShootBullet();
            timer = cooldown;
        }
    }

    private void ShootBullet()
    {
        GameObject shot = Instantiate(bullet, canon.position, transform.rotation);
        Vector3 offset = new Vector3(0f, -target.GetAttackPoint().localScale.y*1.5f, 0f);
        shot.GetComponent<Bullet>().SetupBullet(target.GetAttackPoint().position + offset, this);
    }

    public override void Kill()
    {
        model.CheckForVictory(this);
        Instantiate(deathEffect, transform.position, transform.rotation);
        OnKilled();
        killed = true;
        Destroy(gameObject);
    }

    public int GetId()
    {
        return id;
    }

    public override void TargetStart()
    {
        attackPoint = transform.Find("AttackPoint").transform;


        model.AddTarget(this);
        model.AddTower(this);
        Killed += model.OnKilled;
        target = model.GetNearestTargetFrom(this);
        StartCoroutine(CalulateDestination());
    }
}
