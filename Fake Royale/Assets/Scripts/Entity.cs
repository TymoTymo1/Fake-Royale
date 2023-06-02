using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Entity : Target
{
    [SerializeField] public bool canAttackFloor;
    [SerializeField] public bool canAttackAir;
    [SerializeField] public bool canAttackEntities;

    [SerializeField] public bool isInvisble;

    // Damage per second
    [SerializeField]  int damageOnEntites;
    [SerializeField]  int damageOnBuildings;

    // Timing of damage
    [SerializeField] float intervall;

    [SerializeField] float attackRange;

    protected NavMeshAgent agent;

    private Target destination;

    public void SetDestination(Target destination)
    {
        this.destination = destination;
        agent.SetDestination(destination.transform.position);
    }
    public void Attack()
    {
        if (Vector3.Distance(transform.position, destination.transform.position) > attackRange) return;

        InvokeRepeating(nameof(DoDamage), intervall/2.0f, intervall);
    }

    void DoDamage()
    {
        destination.TakeDamage(damageOnEntites);

        if (Vector3.Distance(transform.position, destination.transform.position) > attackRange) CancelInvoke(nameof(DoDamage));
    }

    private void Update()
    {
        if (Vector3.Distance(destination.transform.position, transform.position) < attackRange)
        {
            if (!agent.isStopped)
            {
                agent.isStopped = true;
                Attack();
            }
        }
    }
    public override void TargetStart()
    {
       // attackRange; // TODO
        agent = GetComponent<NavMeshAgent>();   
        SetDestination(model.GetNearestTargetFrom(this));
    }
}
