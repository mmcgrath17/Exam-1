///////////////////
//Matt McGrath
//CS172
//3/3/2016
//Exam 1
//I affirm that all code given below was written solely by me, Matt McGrath, and that any help I received adhered to the rules stated for this exam.
///////////////////

#pragma once
#include <iostream>
#include <string>
#include "Event.h"
using namespace std;

class Venue {
private:
	Event scheduledEvents[12];
	int numEvents = 12;
public:
	Venue() {
		for (int i = 0; i < numEvents; i++) {
			Event newEvent;
			scheduledEvents[i] = newEvent;
		}

	}
	bool validTime(int Time) {
		if (scheduledEvents[Time].getTime() == Time) {
			return false;
		}
		else {
			return true;
		}
	};
	void addEvent(int Time, string name) {
		if (validTime(Time) == true) {
			Event newEvent;
			newEvent.setTime(Time);
			newEvent.setTitle(name);
			scheduledEvents[Time] = newEvent;
			cout << "Event Scheduled!" << endl;
		}
		else {
			cout << "Cannot book event" << endl;
		}

	};
	Event findEvent(int Time) {
		for (int m = 0; m < numEvents; m++) {
			if (scheduledEvents[m].getTime() == Time) {
				return scheduledEvents[m];
			}
		}
	};
	Event findEvent(string name) {
		for (int m = 0; m < numEvents; m++) {
			if (scheduledEvents[m].getTitle() == name) {
				return scheduledEvents[m];
			}
		}
	}
};