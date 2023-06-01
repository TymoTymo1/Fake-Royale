using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tower : MonoBehaviour
{
    private float hp;
    private bool team;

    public int id;
    // Getting the model for later actions
    Model model;

    void Start()
    {
        model = GameObject.Find("Model").GetComponent<Model>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    
    public void TakeDamage(float damage)
    {
        hp -= damage;
    }
}
