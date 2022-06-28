#pragma once
#include <vector>

using namespace std;

class Observer {
public:
	virtual void update() = 0;
};

class Subject {
private:
	vector<Observer*>observers;
public:
	void registerObserver(Observer* ob);
	void unregisterObserver(Observer* ob);
	void notify();
};