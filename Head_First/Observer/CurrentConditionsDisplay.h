#ifndef CURRENTCONDITIONSDISPLAY_H
#define CURRENTCONDITIONSDISPLAY_H

#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"
#include <iostream>
#include <memory>

class CurrentConditionsDisplay : public Observer, public DisplayElement {
	public:
		CurrentConditionsDisplay(Subject *weatherData){
			this->weatherData = weatherData;
			weatherData->registerObserver(this);
		}
		void update(float t, float h, float p) override {
			temperature = t;
			humidity = h;
			display();
		}
		void display() const override{
			std::cout << "Current Conditions: " << temperature
		<< "F degree and " << humidity << "% humidity" << std::endl;
		}
	private:
		float temperature = 0.0f;
		float humidity = 0.0f;
		Subject* weatherData;
};

#endif