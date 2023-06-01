using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tower : MonoBehaviour
{
    private float hp;
    public bool team;

    public int id;
    // Getting the model for later actions
    Model model;

    void OnEnable()
    {
        model = GameObject.Find("Model").GetComponent<Model>();
        model.AddTower(this);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    
    public void TakeDamage(float damage)
    {
        hp -= damage;
    }

    public bool GetTeam()
    {
        return team;
    }

    public int GetId()
    {
        return id;
    }
}
