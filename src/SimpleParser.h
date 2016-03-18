/***************************************************************************

    file                 : SimpleParser.h
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
#ifndef SIMPLEPARSER_H_
#define SIMPLEPARSER_H_

#include <string>

class SimpleParser
{
public:

    static bool parse(std::string sensors, std::string tag, float &value);
    static bool parse(std::string sensors, std::string tag, int   &value);
    static bool parse(std::string sensors, std::string tag, float *value, int size);
    static std::string stringify(std::string tag, float  value);
    static std::string stringify(std::string tag, int    value);
    static std::string stringify(std::string tag, float *value, int size);

};

#endif /*SIMPLEPARSER_H_*/
