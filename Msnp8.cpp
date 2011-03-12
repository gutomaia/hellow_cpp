#ifndef MSNP8_CPP
#define MSNP8_CPP

#include <string>
#include "Msnp8.cpp"

using namespace std;

Msnp8::Msnp8(){
	this->MSN_HOST = "messenger.hotmail.com";
	this->MSN_PORT = 1863;

	this->PROTOCOL_VERSION = "MSNP8";
	this->LOCALE_ID = "0x0409";

	this->OS_TYPE = "win";
	this->OS_VERSION = "4.10"; //windows 98;
	this->CPU_ARCHITECTURE = "i386";
	this->CLIENT_NAME = "MSNMSGR";
	this->CLIENT_VERSION = "6.0.0602"; //5.0.0544
		//Chalenger
	this->CLIENT_ID = "MSMSGS";
	this->CLIENT_IDCODE = "msmsgs@msnmsgr.com";
	this->CLIENT_CODE = "Q1P7W2E4J9R8U3S5"; // needed for the chalenger
}

void Msnp8::execute(string command) {

	string cmd = command.substr(0,3);
	if (cmd == "VER"){
		this->send(this->cvr());
	}else if (cmd == "CVR") {
		this->send(this->usr());
	}else if (cmd == "XFR") {
		this->connect(this->MSN_HOST, 1853);
		this->send(this->ver());
	}
	
}


#endif
