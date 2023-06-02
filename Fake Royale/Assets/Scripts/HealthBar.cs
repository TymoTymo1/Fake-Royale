using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthBar : MonoBehaviour
{

    Transform cam;
    Vector3 changedPos;

    // Start is called before the first frame update
    void Start()
    {
        cam = GameObject.Find("Main Camera").transform;

        Vector3 camPos = cam.position;

        changedPos = new Vector3(transform.position.x,  camPos.y, camPos.z);
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        transform.LookAt(changedPos);
    }
}
