#include "Repo.h"

void ChatSession::addMessage(string userName, string message) {
	UserMessage um{ userName, message };
	this->messages.push_back(um);
	Subject::notify();
}