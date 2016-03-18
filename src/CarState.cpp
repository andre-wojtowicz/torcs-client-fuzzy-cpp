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
#include "CarState.h"

#include "SimpleParser.h"

#include <cassert>

CarState::CarState()
{
}

CarState::CarState(std::string sensors)
{
    SimpleParser::parse(sensors, "angle", this->angle);
    SimpleParser::parse(sensors, "curLapTime", this->curLapTime);
    SimpleParser::parse(sensors, "damage", this->damage);
    SimpleParser::parse(sensors, "distFromStart", this->distFromStart);
    SimpleParser::parse(sensors, "distRaced", this->distRaced);
    SimpleParser::parse(sensors, "focus", this->focus, FOCUS_SENSORS_NUM);
    SimpleParser::parse(sensors, "fuel", this->fuel);
    SimpleParser::parse(sensors, "gear", this->gear);
    SimpleParser::parse(sensors, "lastLapTime", this->lastLapTime);
    SimpleParser::parse(sensors, "opponents", this->opponents, OPPONENTS_SENSORS_NUM);
    SimpleParser::parse(sensors, "racePos", this->racePos);
    SimpleParser::parse(sensors, "rpm", this->rpm);
    SimpleParser::parse(sensors, "speedX", this->speedX);
    SimpleParser::parse(sensors, "speedY", this->speedY);
    SimpleParser::parse(sensors, "speedZ", this->speedZ);
    SimpleParser::parse(sensors, "track", this->track, TRACK_SENSORS_NUM);
    SimpleParser::parse(sensors, "trackPos", this->trackPos);
    SimpleParser::parse(sensors, "wheelSpinVel", this->wheelSpinVel, 4);
    SimpleParser::parse(sensors, "z", this->z);
}

std::string CarState::toString()
{
    std::string str;
    str = SimpleParser::stringify("angle", this->angle);
    str += SimpleParser::stringify("curLapTime", this->curLapTime);
    str += SimpleParser::stringify("damage", this->damage);
    str += SimpleParser::stringify("distFromStart", this->distFromStart);
    str += SimpleParser::stringify("distRaced", this->distRaced);
    str += SimpleParser::stringify("focus", this->focus, FOCUS_SENSORS_NUM);
    str += SimpleParser::stringify("fuel", this->fuel);
    str += SimpleParser::stringify("gear", this->gear);
    str += SimpleParser::stringify("lastLapTime", this->lastLapTime);
    str += SimpleParser::stringify("opponents", this->opponents, OPPONENTS_SENSORS_NUM);
    str += SimpleParser::stringify("racePos", this->racePos);
    str += SimpleParser::stringify("rpm", this->rpm);
    str += SimpleParser::stringify("speedX", this->speedX);
    str += SimpleParser::stringify("speedY", this->speedY);
    str += SimpleParser::stringify("speedZ", this->speedZ);
    str += SimpleParser::stringify("track", this->track, TRACK_SENSORS_NUM);
    str += SimpleParser::stringify("trackPos", this->trackPos);
    str += SimpleParser::stringify("wheelSpinVel", this->wheelSpinVel, 4);
    str += SimpleParser::stringify("z", this->z);

    return str;

}

float CarState::getAngle()
{
    return angle;
}

void CarState::setAngle(float angle)
{
    this->angle = angle;
}

float CarState::getCurLapTime()
{
    return curLapTime;
}

void CarState::setCurLapTime(float curLapTime)
{
    this->curLapTime = curLapTime;
}

float CarState::getDamage()
{
    return damage;
}

void CarState::setDamage(float damage)
{
    this->damage = damage;
}

float CarState::getDistFromStart()
{
    return distFromStart;
}

void CarState::setDistFromStart(float distFromStart)
{
    this->distFromStart = distFromStart;
}

float CarState::getDistRaced()
{
    return distRaced;
}

void CarState::setDistRaced(float distRaced)
{
    this->distRaced = distRaced;
}

float CarState::getFocus(int i)
{
    assert(i >= 0 && i < FOCUS_SENSORS_NUM);
    return focus[i];
}

void CarState::setFocus(int i, float value)
{
    assert(i >= 0 && i < FOCUS_SENSORS_NUM);
    this->focus[i] = value;
}

float CarState::getFuel()
{
    return fuel;
}

void CarState::setFuel(float fuel)
{
    this->fuel = fuel;
}

int CarState::getGear()
{
    return gear;
}

void CarState::setGear(int gear)
{
    this->gear = gear;
}

float CarState::getLastLapTime()
{
    return lastLapTime;
}

void CarState::setLastLapTime(float lastLapTime)
{
    this->lastLapTime = lastLapTime;
}

float CarState::getOpponents(int i)
{
    assert(i >= 0 && i < OPPONENTS_SENSORS_NUM);
    return opponents[i];
}

void CarState::setOpponents(int i, float value)
{
    assert(i >= 0 && i < OPPONENTS_SENSORS_NUM);
    this->opponents[i] = value;
}

int CarState::getRacePos()
{
    return racePos;
}

void CarState::setRacePos(int racePos)
{
    this->racePos = racePos;
}

int CarState::getRpm()
{
    return rpm;
}

void CarState::setRpm(int rpm)
{
    this->rpm = rpm;
}

float CarState::getSpeedX()
{
    return speedX;
}

void CarState::setSpeedX(float speedX)
{
    this->speedX = speedX;
}

float CarState::getSpeedY()
{
    return speedY;
}

void CarState::setSpeedY(float speedY)
{
    this->speedY = speedY;
}

float CarState::getSpeedZ()
{
    return speedZ;
}


void CarState::setSpeedZ(float speedZ)
{
    this->speedZ = speedZ;
}

float CarState::getTrack(int i)
{
    assert(i >= 0 && i < TRACK_SENSORS_NUM);
    return track[i];
}


void CarState::setTrack(int i, float value)
{
    assert(i >= 0 && i < TRACK_SENSORS_NUM);
    this->track[i] = value;
}

float CarState::getTrackPos()
{
    return trackPos;
}

void CarState::setTrackPos(float prackPos)
{
    this->trackPos = trackPos;
}

float CarState::getWheelSpinVel(int i)
{
    assert(i >= 0 && i < 4);
    return wheelSpinVel[i];
}

void CarState::setWheelSpinVel(int i, float value)
{
    assert(i >= 0 && i < 4);
    wheelSpinVel[i] = value;
}

float CarState::getZ()
{
    return z;
}

void CarState::setZ(float z)
{
    this->z = z;
}
