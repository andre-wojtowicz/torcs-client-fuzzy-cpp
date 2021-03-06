/***************************************************************************

    file                 : CarControl.h
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
#ifndef CARCONTROL_H_
#define CARCONTROL_H_

#include <string>

class CarControl
{
private:

    // Accelerate command [0,1]
    float accel;

    // Brake command [0,1]
    float brake;

    // Gear command {-1,0,1,...,6}
    int gear;

    // Steering command [-1,1]
    float steer;

    // Clutch command [0,1]
    float clutch;

    // meta-command {0 do nothing, 1 ask competition server to restart the race}
    int meta;

    // focus command [-90,90], i.e. angle of track sensor focus desired by client
    int focus;

public:

    CarControl();
    CarControl(std::string sensors);
    CarControl(float accel, float brake, int gear, float steer, float clutch, int focus, int meta = 0);
    CarControl(float accel, float brake, int gear, float steer, float clutch, int focus = 0);

    std::string toString();
    void fromString(std::string sensors);

    /* Getter and setter methods */

    float getAccel() const;
    void  setAccel(float accel);
    float getBrake() const;
    void  setBrake(float brake);
    int   getGear() const;
    void  setGear(int gear);
    float getSteer() const;
    void  setSteer(float steer);
    int   getMeta() const;
    void  setMeta(int gear);
    float getClutch() const;
    void  setClutch(float clutch);
    int   getFocus();
    void  setFocus(int focus);

    // meta-command value for race restart
    static int META_RESTART;

};

#endif /*CARCONTROL_H_*/
