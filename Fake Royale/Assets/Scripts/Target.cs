using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Target : MonoBehaviour
{
    public int hp;
    public int maxhp;
    public bool team;
    public bool isInAir;
    protected Model model;

    private void OnEnable()
    {
        model = GameObject.Find("Model").GetComponent<Model>();
        model.AddTarget(this);
    }
    public bool GetTeam()
    {
        return team;
    }
    public int GetHP()
    {
        return hp;
    }
    public int TakeDamage(int damage)
    {
        if((hp - damage) <= 0) Kill();
        return hp -= damage;
    }
    public bool GetIsInAir()
    {
        return isInAir;
    }
    public void Kill()
    {
        // Killing stuff for view and logic; LATER!!!!
    }
}
