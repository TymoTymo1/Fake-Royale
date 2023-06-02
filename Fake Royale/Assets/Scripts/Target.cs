using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Target : MonoBehaviour
{
    public int hp;
    public int maxhp;
    public bool team;
    public bool isInAir;
    protected Model model;
    private HealthBar healthBar;
    private GameObject canvas;

    private void Start()
    {
        model = GameObject.Find("Model").GetComponent<Model>();
        model.AddTarget(this);

        canvas = Resources.Load<GameObject>("Canvas");
        //healthBar = canvas.transform.Find("Healthbar").GetComponent<HealthBar>();
        GameObject instant = Instantiate(canvas, transform.position, transform.rotation, transform);
        BoxCollider boxCollider = GetComponent<BoxCollider>();
        instant.GetComponent<RectTransform>().position+=Vector3.up * boxCollider.size.y * 1.5f;

        TargetStart();
      
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
    public virtual void TargetStart() { }
}
