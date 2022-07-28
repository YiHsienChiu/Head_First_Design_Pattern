#ifndef DISPLAYELEMENT_H
#define DISPLAYELEMENT_H

class DisplayElement {
public:
	DisplayElement() = default;
	virtual ~DisplayElement() = default;
	virtual void display() const = 0;
};

#endif