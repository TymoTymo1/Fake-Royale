using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Knight : MonoBehaviour
{
    public float speed = 10f;
    public float damage = 4;

    public Model model;

    void Start()
    {
        
    }

    void Update()
    {
        transform.Translate(new Vector3(0, 0, speed * Time.deltaTime));
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.GetComponent<Tower>() == null) return;
        model.TakeDamage(collision.gameObject.GetComponent<Tower>().id, damage);
    }
}
