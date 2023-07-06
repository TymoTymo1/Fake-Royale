using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Controller : MonoBehaviour
{
    private Model model;
    private Camera cam;
    public Card testModel;

    // Start is called before the first frame update
    void Start()
    {
        model = GetComponent<Model>();
        cam = GameObject.Find("Main Camera").GetComponent<Camera>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            Ray inputRay = cam.ScreenPointToRay(Input.mousePosition);

            if (Physics.Raycast(inputRay, out RaycastHit hit))
            {
                while (hit.collider.tag == "Tower")
                {
                    Vector3 recastOrigin = hit.point + (inputRay.direction.normalized*0.5f);
                    Ray recast = new Ray(recastOrigin, inputRay.direction);
                    if (Physics.Raycast(recast, out RaycastHit hit2))
                    {
                        hit = hit2;
                    }
                }
                if (hit.collider.tag == "Player1Spawn")
                {
                    model.SpawnTarget(testModel, hit.point, false);
                }
            }
        }
        if (Input.GetMouseButtonDown(1))
        {
            Ray inputRay = cam.ScreenPointToRay(Input.mousePosition);

            if (Physics.Raycast(inputRay, out RaycastHit hit))
            {
                if (hit.collider.tag != "Player2Spawn") return;
                model.SpawnTarget(testModel, hit.point, true);
            }
        }
    }
}
