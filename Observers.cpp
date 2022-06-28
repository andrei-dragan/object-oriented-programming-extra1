#include "Observers.h"
#include <algorithm>

void Subject::registerObserver(Observer* ob) {
	this->observers.push_back(ob);
}

void Subject::unregisterObserver(Observer* ob) {
	this->observers.erase(find(this->observers.begin(), this->observers.end(), ob));
}

void Subject::notify() {
	for (auto ob : this->observers) {
		ob->update();
	}
}