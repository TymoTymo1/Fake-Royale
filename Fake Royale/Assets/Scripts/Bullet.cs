using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{

    private Vector3 speedVector;
    private float speed = 10;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(speedVector * Time.deltaTime);
    }

    public void SetupBullet(Vector3 destination)
    {
        transform.rotation = Quaternion.LookRotation(destination);
        Vector3 unnormalizedSpeed = destination-transform.position;
        speedVector = unnormalizedSpeed.normalized;
        speedVector *= speed;
    }
}
