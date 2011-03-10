#include "Msnp.h"
#include <string>

using namespace std;

Msnp::Msnp(){
	this->EL = "/r/n";
	this->_trid = 1;
//	private $_commandListener = null;

}

void Msnp::setConnectionHandle(ConnectionHandle *connectionHandle) {
	this->connectionHandle = connectionHandle;
}

void Msnp::send(string cmd){
	this->connectionHandle->send(cmd);
	this->onCommandSended(cmd);
	this->_trid++;
}

string Msnp::challenger(string chl){
	//TODO md5
	return "29409134351025259292";
}

void Msnp::execute(string msg){
	
}

void Msnp::login(string username, string password){
}


void Msnp::connect(string host, int port){
	this->connectionHandle->connect(host, port);
}

void Msnp::disconnect(){
	this->connectionHandle->disconnect();
}


void Msnp::listen(){
		while (this->connectionHandle->hasMoreCommands()) {
			string command = this->connectionHandle->nextCommand();
			/*
			if (trim($command) != "") {
				$this->execute($command);
				$this->onCommandReceived($command);
			}
			*/
		}
}

void Msnp::addCommandListener(CommandListener *commandListener){
	this->commandListener = commandListener;
}

void Msnp::onCommandReceived(string command){
	if (this->commandListener == NULL){
		this->commandListener->onCommandReceived(command);
	}
}


void Msnp::onCommandSended(string command){
	if (this->commandListener == NULL){
		this->commandListener->onCommandSended(command);
	}
}

