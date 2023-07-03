using UnityEngine;
using System;


public abstract class Target : MonoBehaviour
{
    public int hp;
    public int maxHp;
    public bool team;
    public bool isInAir;
    protected Model model;
    private HealthBar healthBar;
    private GameObject canvas;

    [SerializeField] private ParticleSystem deathEffect;

    protected Transform attackPoint;

    public delegate void KilledEventHandler(object source, EventArgs args);
    public event KilledEventHandler Killed;

    private bool killed = false;

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
    public bool TakeDamage(int damage, bool kill)
    {
        hp -= damage;
        healthBar.TakeDamage(damage);
        if (hp < 0 && !killed) { if (kill) { Kill(); } return true; }
        else return false;
    }

    public bool IsInAir()
    {
        return isInAir;
    }

    public Transform GetAttackPoint()
    {
        return attackPoint;
    }

    public void Kill()
    {
        Instantiate(deathEffect, transform.position, transform.rotation);
        OnKilled();
        killed = true;
        Destroy(gameObject);
    }

    protected virtual void OnKilled()
    {
        if (Killed != null)
        {
            Killed(this, EventArgs.Empty);
        }
    }
    public abstract void TargetStart();

    public void Setup(bool team)
    {
        model = GameObject.Find("Model").GetComponent<Model>();
        this.team = team;
        model.AddTarget(this);
        Killed += model.OnKilled;
    }

}
