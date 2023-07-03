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

    private Transform canon;

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
        canon.LookAt(new Vector3(canon.transform.position.x, target.GetAttackPoint().position.y, canon.transform.position.z));
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



    public int GetId()
    {
        return id;
    }

    public override void TargetStart()
    {
        attackPoint = transform.Find("AttackPoint").transform;
        canon = transform.Find("Canon").Find("Canon");
        model.AddTarget(this);
        Killed += model.OnKilled;
        target = model.GetNearestTargetFrom(this);
        StartCoroutine(CalulateDestination());
    }
}
