using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Knight : Entity
{
    public float speed = 10f;
    public int damage = 4;

    void Update()
    {
    }

    void Awake()
    {

    }
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.GetComponent<Tower>() == null) return;
    }
}
