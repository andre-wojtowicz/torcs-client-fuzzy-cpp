#include "BaseDriver.h"

BaseDriver::BaseDriver()
{
}

BaseDriver::~BaseDriver()
{
}

// Initialization of the desired angles for the rangefinders
void BaseDriver::init(float *angles)
{
    for (int i = 0; i < 19; ++i)
        angles[i] = (float)(-90 + i * 10);
}

void BaseDriver::onShutdown()
{
}

void BaseDriver::onRestart()
{
}