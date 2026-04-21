#pragma once
#include "Weather.h"
#include <string>

class Service
{
public:
	virtual Weather getWeather(string s) = 0;
	virtual ~Service(){};
};

