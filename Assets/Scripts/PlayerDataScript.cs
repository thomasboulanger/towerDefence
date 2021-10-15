using UnityEngine;

public class PlayerDataScript : MonoBehaviour
{
    public static PlayerDataScript singleton;
    public int money;

    private void Awake()
    {
        singleton = this;
    }
}
