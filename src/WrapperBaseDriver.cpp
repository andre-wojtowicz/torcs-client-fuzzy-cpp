/***************************************************************************

    file                 : WrapperBaseDriver.cpp
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
#include "WrapperBaseDriver.h"

std::string WrapperBaseDriver::drive(std::string sensors)
{
    CarState   cs(sensors);
    CarControl cc = wDrive(cs);
    
    return cc.toString();
}
