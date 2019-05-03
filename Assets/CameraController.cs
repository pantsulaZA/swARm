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
        SetupGesture();
    }

    private void SetupGesture()
    {
        panner = new PanGestureRecognizer();
        panner.StateUpdated += PanGestureCallback;
        FingersScript.Instance.AddGesture(panner);
    }

    private void PanGestureCallback(GestureRecognizer gesture)
    {
        if (gesture.State == GestureRecognizerState.Executing)
        {
            if (FingersScript.Instance.Touches.Count == 1)
            {
                target.Translate(-panner.DeltaX * panSpeed * Time.deltaTime, 0, -panner.DeltaY * panSpeed * Time.deltaTime);
            }
            else
            {
                target.Rotate(new Vector3(x: 0, y: panner.DeltaX * rotateSpeed * Time.deltaTime, z: 0));
            }
        }
    }
}