#include"XmlService.h"
#include"JsonService.h"
#include"Weather.h"
int main() {
	XmlService xs;
	Weather w = xs.getWeather("weather.xml");
	JsonService js;
	Weather w = js.getWeather("weather.json");
	w.info();
}