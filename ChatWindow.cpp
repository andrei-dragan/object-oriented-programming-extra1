#include "ChatWindow.h"

ChatWindow::ChatWindow(string _userName, ChatSession& _cs, QWidget* parent)
	: userName{ _userName }, cs {_cs}, QWidget(parent)
{
	ui.setupUi(this);
	this->populateList();
	this->cs.registerObserver(this);
	this->setWindowTitle(QString::fromStdString(this->userName));
	connect(ui.pushButton, &QPushButton::clicked, this, &ChatWindow::sendMessage);
}

ChatWindow::~ChatWindow()
{
}

void ChatWindow::populateList() {
	this->ui.messagesListWidget->clear();

	for (auto um : this->cs.getMessages()) {
		string fullMessage = um.getUserName() + ": " + um.getMessage();
		this->ui.messagesListWidget->addItem(QString::fromStdString(fullMessage));
	}
}

void ChatWindow::update() {
	this->populateList();
}

void ChatWindow::sendMessage() {
	string message = this->ui.insertMessageLineEdit->text().toStdString();
	this->cs.addMessage(this->userName, message);
	this->ui.insertMessageLineEdit->clear();
}