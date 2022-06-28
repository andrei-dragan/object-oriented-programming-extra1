#pragma once

#include <QWidget>
#include "ui_ChatWindow.h"
#include "Observers.h"
#include "Repo.h"

class ChatWindow : public QWidget, public Observer 
{
	Q_OBJECT

public:
	ChatWindow(string _userName, ChatSession& _cs, QWidget *parent = Q_NULLPTR);
	~ChatWindow();

private:
	string userName;
	ChatSession& cs;
	Ui::ChatWindow ui;

public:
	void update() override;
	void sendMessage(); 
	void populateList();
};
