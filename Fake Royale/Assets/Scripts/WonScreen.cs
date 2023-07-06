using UnityEngine;
using UnityEngine.SceneManagement;

public class WonScreen : MonoBehaviour
{
    public void OnClick()
    {
        SceneManager.LoadScene("Menu");
    }
}
