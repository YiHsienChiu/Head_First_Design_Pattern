#ifndef SUBJECT_H
#define SUBJECT_H

#include "Observer.h"
#include <memory>

class Subject{
public:
	Subject() = default;
	virtual ~Subject() = default;
	virtual void registerObserver(Observer* ob) = 0;
	virtual void removeObserver(Observer* ob) = 0;
	virtual void notifyObservers() = 0;
};

#endif