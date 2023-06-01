using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Knight : Entity
{
    public float speed = 10f;
    public float damage = 4;

    private Model model;

    public NavMeshAgent agent;

    private bool team = false;

    void Start()
    {
        model = GameObject.Find("Model").GetComponent<Model>();
        agent = GetComponent<NavMeshAgent>();
        Tower dest = model.GetNearestEnemyTowerFrom(transform, team);
        agent.SetDestination(dest.transform.position);
    }

    void Update()
    {
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.GetComponent<Tower>() == null) return;
        model.TakeDamage(collision.gameObject.GetComponent<Tower>().id, damage);
    }
}
