#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "Subject.h"
#include "Observer.h"
#include <list>

class WeatherData : public Subject{
public:
	WeatherData() : temperature(0.0f), humidity(0.0f), pressure(0.0f){};
	virtual ~WeatherData() = default;
	void registerObserver(Observer* ob){
		observers.push_back(ob);
	}
	void removeObserver(Observer* ob){
		if( !observers.empty() )
			std::erase(observers, ob);
	}
	void notifyObservers(){
		for(auto& o : observers){
			o->update(temperature, humidity, pressure);
		}
	}
	
	void measurementsChange(){
		notifyObservers();
	}
	
	void setMeasurements(const float t, const float h, const float p){
		temperature = t;
		humidity = h;
		pressure = p;
		measurementsChange();
	}
	
private:
	std::list<Observer*> observers;
	float temperature;
	float humidity;
	float pressure;
};

#endif