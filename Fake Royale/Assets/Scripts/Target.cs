using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public abstract class Target : MonoBehaviour
{
    public int hp;
    public int maxHp;
    public bool team;
    public bool isInAir;
    protected Model model;
    private HealthBar healthBar;
    private GameObject canvas;

    protected Transform attackPoint;

    private void Start()
    {
        maxHp = 100; // TODO
        hp = 100;


        model = GameObject.Find("Model").GetComponent<Model>();

        canvas = Resources.Load<GameObject>("Canvas");
        //healthBar = canvas.transform.Find("Healthbar").GetComponent<HealthBar>();
        GameObject instant = Instantiate(canvas, transform.position, transform.rotation, transform);
        BoxCollider boxCollider = GetComponent<BoxCollider>();
        instant.GetComponent<RectTransform>().position+=Vector3.up * boxCollider.size.y * 1.5f;

        healthBar = instant.transform.Find("Healthbar").GetComponent<HealthBar>();
        healthBar.Setup(maxHp);

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
    public void TakeDamage(int damage)
    {
        hp -= damage;
        healthBar.TakeDamage(damage);
        Debug.Log(hp);
        if (hp < 0) Kill();
    }
    public bool IsInAir()
    {
        return isInAir;
    }

    public Transform GetAttackPoint()
    {
        return attackPoint;
    }

    public abstract void Kill();
    public abstract void TargetStart();

    public void Setup(bool team)
    {
        model = GameObject.Find("Model").GetComponent<Model>();
        this.team = team;
        model.AddTarget(this);
    }
}
