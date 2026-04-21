#include "Weather.h"
#include <iostream>

Weather::Weather(string city, double lon, double lat, double t, string weather, double ws, int cloud):
city(city), lon(lon), lat(lat), temperature(t), weather(weather), windSpeed(ws), clouds(cloud) {}

void Weather::info() const
{
	cout << "City: " << city << endl;
	cout << "Coordinates: " << lon << " " << lat << endl;
	cout << "Temperature: " << temperature << endl;
	cout << "Weather: " << weather << endl;
	cout << "WindSpeed: " << windSpeed << endl;
	cout << "Clouds: " << clouds << endl;
}
