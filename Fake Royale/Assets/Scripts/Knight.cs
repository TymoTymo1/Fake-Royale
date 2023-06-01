using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Knight : MonoBehaviour
{
    public float speed = 10f;
    public float damage = 4;

    Model model;

    public NavMeshAgent agent;

    public Transform destination;

    void Start()
    {
        model = GameObject.Find("Model").GetComponent<Model>();
        agent = GetComponent<NavMeshAgent>();
        agent.SetDestination(model.getTower().gameObject.transform.position);
        agent.SetDestination(destination.position);
    }

    void Update()
    {
        //transform.Translate(new Vector3(0, 0, speed * Time.deltaTime));
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.GetComponent<Tower>() == null) return;
        model.TakeDamage(collision.gameObject.GetComponent<Tower>().id, damage);
    }
}
