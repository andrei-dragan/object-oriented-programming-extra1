#pragma once

#include <string>

using namespace std;

class UserMessage {
private:
	string userName;
	string message;
public:
	UserMessage(string _userName, string _message) : userName{ _userName }, message{ _message } {};
	string getUserName() { return this->userName; }
	string getMessage() { return this->message; }
};