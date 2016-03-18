#ifndef FUZZYRIVER_H_
#define FUZZYRIVER_H_

#include "WrapperBaseDriver.h"

#include <fl/Headers.h>

class FuzzyDriver : public WrapperBaseDriver
{
public:

    // Constructor
    FuzzyDriver(std::string trackName, BaseDriver::tstage stage, std::string fclFile);

    // Destructor
    ~FuzzyDriver();

    // Load FCL file
    bool loadFCLfile();

    // FuzzyDriver implements a simple and heuristic controller for driving
    virtual CarControl wDrive(CarState cs);

    // Print a shutdown message 
    virtual void onShutdown();

    // Print a restart message 
    virtual void onRestart();

    // Initialization of the desired angles for the rangefinders
    virtual void init(float *angles);

    static const int gearUp[6];
    static const int gearDown[6];

    // Solves the gear changing subproblems
    int getGear(CarState &cs);

private:

    std::string fclFile;

    fl::Engine *flEngine;
};

#endif /*FUZZYRIVER_H_*/
