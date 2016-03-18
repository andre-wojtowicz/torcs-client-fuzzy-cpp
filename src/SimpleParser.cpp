/***************************************************************************

    file                 : SimpleParser.cpp
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
#include "SimpleParser.h"

#include <sstream>

bool SimpleParser::parse(std::string sensors, std::string tag, float &value)
{
    size_t open, close;
    open = sensors.find_first_of('(');
    while (open != std::string::npos)
    {
        close = sensors.find_first_of(')', open);
        if (close != std::string::npos)
        {
            std::istringstream IN(sensors.substr(open + 1, close - open - 1));
            std::string currTag;
            IN >> currTag;
            if (currTag.compare(tag) == 0)
            {
                IN >> value;
                return true;
            }
            open = sensors.find_first_of('(', close + 1);
        }
        else
            return false;

    }
    return false;
}

bool SimpleParser::parse(std::string sensors, std::string tag, int &value)
{
    size_t open, close;
    open = sensors.find_first_of('(');;
    while (open != std::string::npos)
    {
        close = sensors.find_first_of(')', open);
        if (close != std::string::npos)
        {
            std::istringstream IN(sensors.substr(open + 1, close - open - 1));
            std::string currTag;
            IN >> currTag;
            if (currTag.compare(tag) == 0)
            {
                IN >> value;
                return true;
            }
            open = sensors.find_first_of('(', close + 1);
        }
        else
            return false;
    }
    return false;
}

bool SimpleParser::parse(std::string sensors, std::string tag, float *value, int size)
{
    size_t open, close;
    open = sensors.find_first_of('(');
    while (open != std::string::npos)
    {
        close = sensors.find_first_of(')', open);
        if (close != std::string::npos)
        {
            std::istringstream IN(sensors.substr(open + 1, close - open - 1));
            std::string currTag;
            IN >> currTag;
            if (currTag.compare(tag) == 0)
            {
                for (int i = 0; i < size; ++i)
                {
                    if (!(IN >> value[i]))
                        return false;
                }
                return true;
            }
            open = sensors.find_first_of('(', close + 1);
        }
        else
            return false;
    }
    return false;
}

std::string SimpleParser::stringify(std::string tag, float value)
{
    std::ostringstream STR;
    STR << "(" << tag << " " << value << ")";
    return STR.str();
}

std::string SimpleParser::stringify(std::string tag, int value)
{
    std::ostringstream STR;
    STR << "(" << tag << " " << value << ")";
    return STR.str();
}

std::string SimpleParser::stringify(std::string tag, float *value, int size)
{
    std::ostringstream STR;
    STR << "(" << tag;
    for (int i = 0; i < size; ++i)
    {
        STR << " " << value[i];
    }
    STR << ")";
    return STR.str();
}
