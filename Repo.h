#pragma once
#include "Domain.h"
#include "Observers.h"
#include <vector>

class ChatSession : public Subject {
private:
	vector<UserMessage>messages;
public:
	void addMessage(string userName, string message);
	vector<UserMessage> getMessages() { return this->messages; };
};