/***************************************************************************

    file                 : WrapperBaseDriver.h
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
#ifndef WRAPPERBASEDRIVER_H_
#define WRAPPERBASEDRIVER_H_

#include "BaseDriver.h"
#include "CarState.h"
#include "CarControl.h"

class WrapperBaseDriver : public BaseDriver
{
public:

    // the drive function with string input and output
    virtual std::string drive(std::string sensors);

    // drive function that exploits the CarState and CarControl wrappers as input and output.
    virtual CarControl wDrive(CarState cs) = 0;
};

#endif /*WRAPPERBASEDRIVER_H_*/
