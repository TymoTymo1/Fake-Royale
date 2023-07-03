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

    [SerializeField] GameObject bullet;

    private float range = 10f;

    void OnEnable()
    {
    }

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
        timer -= Time.deltaTime;
        if (timer <= 0f)
        {
            ShootBullet();
            timer = cooldown;
        }
    }

    private void ShootBullet()
    {
        GameObject shot = Instantiate(bullet, transform.position, transform.rotation);
        shot.GetComponent<Bullet>().SetupBullet(target.GetAttackPoint().position);
    }



    public int GetId()
    {
        return id;
    }

    public override void TargetStart()
    {
        attackPoint = transform.Find("AttackPoint").transform;
        model.AddTarget(this);
        Killed += model.OnKilled;
        target = model.GetNearestTargetFrom(this);
        StartCoroutine(CalulateDestination());
    }
}
