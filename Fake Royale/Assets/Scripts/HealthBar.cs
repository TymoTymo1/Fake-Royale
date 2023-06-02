using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthBar : MonoBehaviour
{

    Transform cam;
    Vector3 changedPos;
    Slider slider;
    public float maxHp;
    public float hp;
    private RawImage fill;

    // Start is called before the first frame update
    void Start()
    {
        cam = GameObject.Find("Main Camera").transform;

        Vector3 camPos = cam.position;

        changedPos = new Vector3(transform.position.x,  camPos.y, camPos.z);

        slider = GetComponent<Slider>();
        fill = transform.Find("Fill").GetComponent<RawImage>();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        transform.LookAt(changedPos);
    }

    public void TakeDamage(float damage)
    {
        hp = Mathf.Max(hp - damage, 0);
        slider.value = hp / maxHp;
        //Vector3 color = Vector3.Lerp(new Vector3(0, 1, 0), new Vector3(1, 0, 0), 1-slider.value);
        float r = Mathf.Min(1.0f, (1f-slider.value) * 2f);
        float g = 1.0f;
        if (r >= 1.0f)
        {
            g = Mathf.Max(0.0f, slider.value*2f);
        }
        fill.color = new Color(r, g, 0);
    }

    public void Setup(float maxHp)
    {
        this.maxHp = maxHp;
        hp = maxHp;
    }
}
