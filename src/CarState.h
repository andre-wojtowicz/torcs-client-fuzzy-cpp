/***************************************************************************

    file                 : CarState.h
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
#ifndef CARSTATE_H_
#define CARSTATE_H_

#define FOCUS_SENSORS_NUM 5
#define TRACK_SENSORS_NUM 19
#define OPPONENTS_SENSORS_NUM 36

#include <string>

class CarState
{
private:

    float angle;
    float curLapTime;
    float damage;
    float distFromStart;
    float distRaced;
    float focus[FOCUS_SENSORS_NUM];
    float fuel;
    int   gear;
    float lastLapTime;
    float opponents[OPPONENTS_SENSORS_NUM];
    int   racePos;
    int   rpm;
    float speedX;
    float speedY;
    float speedZ;
    float track[TRACK_SENSORS_NUM];
    float trackPos;
    float wheelSpinVel[4];
    float z;

public:

    CarState();
    CarState(std::string sensors);

    std::string toString();

    /* Getter and setter methods */

    float getAngle();
    void  setAngle(float angle);
    float getCurLapTime();
    void  setCurLapTime(float curLapTime);
    float getDamage();
    void  setDamage(float damage);
    float getDistFromStart();
    void  setDistFromStart(float distFromStart);
    float getDistRaced();
    void  setDistRaced(float distRaced);
    float getFocus(int i);
    void  setFocus(int i, float value);
    float getFuel();
    void  setFuel(float fuel);
    int   getGear();
    void  setGear(int gear);
    float getLastLapTime();
    void  setLastLapTime(float lastLapTime);
    float getOpponents(int i);
    void  setOpponents(int i, float value);
    int   getRacePos();
    void  setRacePos(int racePos);
    int   getRpm();
    void  setRpm(int rpm);
    float getSpeedX();
    void  setSpeedX(float speedX);
    float getSpeedY();
    void  setSpeedY(float speedY);
    float getSpeedZ();
    void  setSpeedZ(float speedZ);
    float getTrack(int i);
    void  setTrack(int i, float value);
    float getTrackPos();
    void  setTrackPos(float trackPos);
    float getWheelSpinVel(int i);
    void  setWheelSpinVel(int i, float value);
    float getZ();
    void  setZ(float z);

};

#endif /*CARSTATE_H_*/
