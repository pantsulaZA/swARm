using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DigitalRubyShared;

public class CameraController : MonoBehaviour
{
    public Transform target;
    public Transform tempFocus;
    public float panSpeed = 10f;
    public float rotateSpeed = 10f;
    public float zoomSpeed = 10f;
    public GameController gameController;
    private PanGestureRecognizer panner;
    private TapGestureRecognizer tapper;
    private ScaleGestureRecognizer zoomer;
    private RotateGestureRecognizer rotator;
    private Vector3 cameraOffset;
    private float maxCameraHeight = 50f;
    private float minCameraHeight = 10f;

    void Start()
    {
        SetupGesture();
    }

    void Update()
    {
        if (tempFocus != null)
        {
            target.transform.position = tempFocus.position;
        }
        else
        {
            Vector3 rayPos = target.position;
            rayPos.y = 50;
            var ray = new Ray(rayPos, Vector3.down);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {
                var selection = hit.transform.GetComponent<CameraFollow>();
                if (selection != null)
                {
                    // Debug.Log("Camera hit " + hit.point);
                    target.position = hit.point;
                }
            }
        }
    }

    private void SetupGesture()
    {
        panner = new PanGestureRecognizer();
        panner.StateUpdated += PanGestureCallback;
        FingersScript.Instance.AddGesture(panner);

        tapper = new TapGestureRecognizer();
        tapper.StateUpdated += ScreenTapped;
        FingersScript.Instance.AddGesture(tapper);

        zoomer = new ScaleGestureRecognizer();
        zoomer.StateUpdated += Zoom;
        FingersScript.Instance.AddGesture(zoomer);

        rotator = new RotateGestureRecognizer();
        rotator.StateUpdated += Rotate;
        FingersScript.Instance.AddGesture(rotator);
    }

    private void PanGestureCallback(GestureRecognizer gesture)
    {
        if (panner.State == GestureRecognizerState.Executing)
        {
            if (tempFocus != null)
            {
                target.Rotate(new Vector3(x: 0, y: panner.DeltaX * rotateSpeed * Time.deltaTime, z: 0));
                transform.Translate(-Vector3.forward * panner.DeltaY * zoomSpeed * Time.deltaTime);

            }
            else
            {
                Vector3 newPosition = new Vector3(-panner.DeltaX * panSpeed * Time.deltaTime * transform.position.y / maxCameraHeight / 5,
                 0,
                 -panner.DeltaY * panSpeed * Time.deltaTime * transform.position.y / maxCameraHeight / 5);
                target.Translate(newPosition);
            }
        }
    }
    private void ScreenTapped(GestureRecognizer gesture)
    {
        if (gesture.State == GestureRecognizerState.Ended)
        {
            Debug.Log("Tapping");
            Vector3 pos = new Vector3(x: tapper.StartFocusX, y: tapper.StartFocusY, z: 0);
            Debug.Log(pos);
            var ray = Camera.main.ScreenPointToRay(pos);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {
                var selection = hit.transform.GetComponent<SelectableObject>();
                if (selection)
                {
                    tempFocus = selection.transform;
                }
                else
                {
                    tempFocus = null;
                    if (hit.transform.GetComponent<Plantable>() != null)
                    {
                        gameController.PlantTree(hit.point);
                        Debug.Log(hit.point);
                    }
                }
            }
        }
    }

    private void Zoom(GestureRecognizer gesture)
    {
        if (gesture.State == GestureRecognizerState.Executing)
        {
            float zoom = (1 - zoomer.ScaleMultiplier);
            Vector3 newPosition = Vector3.forward * zoom * zoomSpeed;
            
            if ((transform.localPosition.y >= minCameraHeight && zoom < 0) ||
            (transform.localPosition.y >= minCameraHeight && zoom > 0))
            {
                transform.Translate(newPosition);
            }

        }
    }

    private void Rotate(GestureRecognizer gesture)
    {
        if (gesture.State == GestureRecognizerState.Executing)
        {
            target.Rotate(new Vector3(x: 0, y: rotator.RotationDegreesDelta * rotateSpeed * Time.deltaTime, z: 0));
        }
    }
}