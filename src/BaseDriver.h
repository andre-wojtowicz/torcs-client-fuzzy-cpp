/***************************************************************************

 file                 : BaseDriver.h
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
#ifndef BASEDRIVER_H_
#define BASEDRIVER_H_

#include <string>

class BaseDriver
{
public:

    typedef enum { WARMUP = 0, QUALIFYING = 1, RACE = 2, UNKNOWN = 3 } tstage;

    tstage stage;
    std::string trackName;

    // Default Constructor
    BaseDriver();

    // Default Destructor;
    virtual ~BaseDriver();

    // Initialization of the desired angles for the rangefinders
    virtual void init(float *angles);

    // The main function: 
    //     - the input variable sensors represents the current world sate
    //     - it returns a string representing the controlling action to perform    
    virtual std::string drive(std::string sensors) = 0;

    // Callback function called at shutdown
    virtual void onShutdown();

    // Callback function called at server restart
    virtual void onRestart();

};
#endif /*BASEDRIVER_H_*/
