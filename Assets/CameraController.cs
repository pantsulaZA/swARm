using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DigitalRubyShared;

public class CameraController : MonoBehaviour
{
    public Transform target;
    public float panSpeed = 1.0f;
    public float rotateSpeed = 1.0f;
    private PanGestureRecognizer panner;
    private RotateGestureRecognizer rotator;
    private Vector3 cameraOffset;
    
    void Start()
    {
        SetCamera();
        SetupGesture();
    }

    private void SetupGesture()
    {
        panner = new PanGestureRecognizer();
        panner.StateUpdated += PanGestureCallback;
        FingersScript.Instance.AddGesture(panner);

        rotator = new RotateGestureRecognizer();
        rotator.StateUpdated += RotateGestureCallback;
        FingersScript.Instance.AddGesture(rotator);
    }

    private void PanGestureCallback(GestureRecognizer gesture)
    {
    if (gesture.State == GestureRecognizerState.Executing) 
        {
          target.Translate(-panner.DeltaX * panSpeed * Time.deltaTime, 0, -panner.DeltaY * panSpeed * Time.deltaTime);
        }
    }

    private void RotateGestureCallback(GestureRecognizer gesture)
    {
        if (gesture.State == GestureRecognizerState.Executing) 
        {
            target.RotateAround(target.position, Vector3.up, rotator.RotationDegreesDelta * rotateSpeed);
        }
        SetCamera();
    }

    private void SetCamera()
    {
        transform.LookAt(target.position);
        cameraOffset = transform.position - target.position;
    }
}
