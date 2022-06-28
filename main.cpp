#include "ChatWindow.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ChatSession s;

    ChatWindow w1{ "Andrei", s};
    ChatWindow w2{ "Goerge", s};
    ChatWindow w3{ "Iulian", s};


    w1.show();
    w2.show();
    w3.show();
    return a.exec();
}
