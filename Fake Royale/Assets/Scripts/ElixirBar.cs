using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ElixirBar : MonoBehaviour
{
    private Slider slider;
    [SerializeField] private float refillRate = 0.8f;

    [SerializeField] private int elixir;
    [SerializeField] private float slidervalue;

    private ElexirFrameGraphics[] elexirFrames = new ElexirFrameGraphics[10];
    [SerializeField] Transform elexirFramesParent;
    // Start is called before the first frame update
    void Start()
    {
        slider = GetComponent<Slider>();
        slider.value = 0;

        // Getting all elexirFrames

        for (int i = 0; i < 10; i++)
        {
            elexirFrames[i] = elexirFramesParent.GetChild(i).GetComponent<ElexirFrameGraphics>();
        }

        InvokeRepeating("Add" , refillRate, refillRate);
    }

    // Update is called once per frame
    void Update()
    {
        if (elixir >= 10f) return;
        slidervalue = slidervalue += Time.deltaTime * 1 /refillRate * 0.1f;
        slider.value = elixir / 10f + slidervalue;
    }

    public bool ReduceElixir(int by)
    {
        if ((int)elixir - by < 0) return false;
        elixir = (int)(elixir-by);

        CancelInvoke("Add");
        InvokeRepeating("Add", refillRate, refillRate);

        // Updating elixirBar
        // And elixirframes
        for (int i = elixir + by -1; i > elixir -1; i--)
        {
            elexirFrames[i].Unfill();
        }

        return true;
    }

    void Add()
    {
        if (elixir >= 10)
        {
            foreach (ElexirFrameGraphics graphic in elexirFrames)
            {
                graphic.Fill();
            }
            return;
        }
        elixir++;
        Debug.Log(elixir);
        elexirFrames[elixir -1].Fill();
        slidervalue = 0;
        slider.value = elixir / 10f + slidervalue;
    }
}
