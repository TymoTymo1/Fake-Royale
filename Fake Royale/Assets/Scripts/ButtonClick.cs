using UnityEngine;
using UnityEngine.SceneManagement;

public class ButtonClick : MonoBehaviour { 
    public void OnClick()
    {
        SceneManager.LoadScene("Game");
    }
}
