using UnityEngine;

public class Bullet : MonoBehaviour
{

    private Vector3 speedVector;
    private float speed = 3f;
    private Model model;

    private float splashRadius = 2f;
    private Target tower;

    private int damage = 25;

    [SerializeField] GameObject explosion;
    // Start is called before the first frame update
    void Start()
    {
        model = GameObject.Find("Model").GetComponent<Model>();
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(speedVector * Time.deltaTime, Space.World);
    }

    public void SetupBullet(Vector3 destination, Target tower)
    {
        this.tower = tower;
        transform.rotation = Quaternion.LookRotation(destination);
        Vector3 unnormalizedSpeed = destination-transform.position;
        speedVector = unnormalizedSpeed;
        speedVector *= speed;
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Tower") return;
        //Explode
        Instantiate(explosion, transform.position, transform.rotation);
        model.DamageAllTargetsInRadius(transform.position, splashRadius, damage, tower);
        Destroy(gameObject);
    }
}
