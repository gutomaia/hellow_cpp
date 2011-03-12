#ifndef NOTIFICATION_CPP
#define NOTIFICATION_CPP

#include "Notification.cpp"

using namespace std;

Notification::Notification(){
}

void Notification::connect(string host, int port){
}

void Notification::login(string username, string password){
	this->username = username;
	this->send(this->ver());
}

string Notification::getUsername(){
	return this->username;
}

#endif
