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
using namespace std;

class Event {
private:
	int Time;
	string Title;

public:
		Event(){
			Time = -1;
			Title = "free";	
		}
		Event(int time, string name) {
			Time = time;
			Title = name;

		}
		int getTime(){
			return Time;
		}
		string getTitle(){
			return Title;
		}
		void setTime(int t){
			Time = t;
		}
		void setTitle(string name){
			Title = name;
		}

};

