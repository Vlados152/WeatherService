#pragma once
#include "Weather.h"
#include <string>

class Service
{
	virtual Weather getWeather(string s) = 0;
	virtual ~Service() {};
};

