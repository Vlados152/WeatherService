#pragma once
#include "Weather.h"
#include"Service.h"
#include <string>
#include"json.hpp"
class JsonService :public Service
{
public:
	virtual Weather getWeather(string s) override;
	virtual ~JsonService(){};
};
