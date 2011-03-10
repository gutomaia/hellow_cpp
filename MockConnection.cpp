#ifndef MOCKCONNECTION_CPP

#define MOCKCONNECTION_CPP
//#include "MockConnection.h"

using namespace std;

class MockConnection : implements ConnectionHandle {
	
	public:
	string sended;
	string received;
	string host;
	int port;
		
	MockConnection(){
	}

	virtual void connect(string host, int port) {
		this->host = host;
		this->port = port;
	}
	
	virtual void disconnect(){
	}
	
	virtual string nextCommand() const {
		return "";
	}
	
	virtual int hasMoreCommands() const{
		return 0;		
	}

	virtual void send(string cmd){
		cout << cmd;
		
	}
	
	void receive(string cmd){
		this->received = cmd;
	}

	};

#endif
