/***************************************************************************

    file                 : SimpleDriver.h
    copyright            : (C) 2007 Daniele Loiacono

 ***************************************************************************/

 /***************************************************************************
  *                                                                         *
  *   This program is free software; you can redistribute it and/or modify  *
  *   it under the terms of the GNU General Public License as published by  *
  *   the Free Software Foundation; either version 2 of the License, or     *
  *   (at your option) any later version.                                   *
  *                                                                         *
  ***************************************************************************/
#ifndef SIMPLEDRIVER_H_
#define SIMPLEDRIVER_H_

#include "WrapperBaseDriver.h"

class SimpleDriver : public WrapperBaseDriver
{
public:

    // Constructor
    SimpleDriver();

    // SimpleDriver implements a simple and heuristic controller for driving
    virtual CarControl wDrive(CarState cs);

    // Print a shutdown message 
    virtual void onShutdown();

    // Print a restart message 
    virtual void onRestart();

    // Initialization of the desired angles for the rangefinders
    virtual void init(float *angles);

private:

    /* Gear Changing Constants*/

    // RPM values to change gear 
    static const int gearUp[6];
    static const int gearDown[6];

    /* Stuck constants*/

    // How many time steps the controller wait before recovering from a stuck position
    static const int stuckTime;
    // When car angle w.r.t. track axis is grather tan stuckAngle, the car is probably stuck
    static const float stuckAngle;

    /* Steering constants*/

    // Angle associated to a full steer command
    static const float steerLock;
    // Min speed to reduce steering command 
    static const float steerSensitivityOffset;
    // Coefficient to reduce steering command at high speed (to avoid loosing the control)
    static const float wheelSensitivityCoeff;

    /* Accel and Brake Constants*/

    // max speed allowed
    static const float maxSpeed;
    // Min distance from track border to drive at  max speed
    static const float maxSpeedDist;
    // pre-computed sin5
    static const float sin5;
    // pre-computed cos5
    static const float cos5;

    /* ABS Filter Constants */

    // Radius of the 4 wheels of the car
    static const float wheelRadius[4];
    // min slip to prevent ABS
    static const float absSlip;
    // range to normalize the ABS effect on the brake
    static const float absRange;
    // min speed to activate ABS
    static const float absMinSpeed;

    /* Clutch constants */
    static const float clutchMax;
    static const float clutchDelta;
    static const float clutchRange;
    static const float clutchDeltaTime;
    static const float clutchDeltaRaced;
    static const float clutchDec;
    static const float clutchMaxModifier;
    static const float clutchMaxTime;

    // counter of stuck steps
    int stuck;

    // current clutch
    float clutch;

    // Solves the gear changing subproblems
    int getGear(CarState &cs);

    // Solves the steering subproblems
    float getSteer(CarState &cs);

    // Solves the gear changing subproblems
    float getAccel(CarState &cs);

    // Apply an ABS filter to brake command
    float filterABS(CarState &cs, float brake);

    // Solves the clucthing subproblems
    void clutching(CarState &cs, float &clutch);
};

#endif /*SIMPLEDRIVER_H_*/
