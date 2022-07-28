#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"

#include <iostream>

int main()
{
	auto weatherData = WeatherData();
	auto currentDisplay = CurrentConditionsDisplay(&weatherData);
	weatherData.setMeasurements(80, 65, 30.4f);
	weatherData.setMeasurements(82, 70, 29.2f);
	weatherData.setMeasurements(78, 90, 29.2f);
	
	system("pause");
	return 0;
}