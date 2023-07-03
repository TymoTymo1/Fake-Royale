using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ElexirFrameGraphics : MonoBehaviour
{

    Animator fillingAnimation;
    Animator frameAnimation;

    private void Start()
    {
        fillingAnimation = transform.Find("Filling").gameObject.GetComponent<Animator>();
        frameAnimation = GetComponent<Animator>();
    }
    public void Fill()
    {

        transform.Find("Filling").gameObject.SetActive(true);
        frameAnimation.SetTrigger("filling");
    }
    public void Unfill()
    {
        transform.Find("Filling").gameObject.SetActive(false);
    }
}
