#ifndef PROTOCOLTEST_H
#define PROTOCOLTEST_H

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include <string>
#include "Msnp.h"
#include "Notification.h"
#include "MockConnection.cpp"

class ProtocolTest : public CppUnit::TestFixture {
	CPPUNIT_TEST_SUITE( ProtocolTest );
	CPPUNIT_TEST( TestChallenger );
	CPPUNIT_TEST( TestSession );
	CPPUNIT_TEST_SUITE_END();

	private:

	//Msnp * msn;
	Notification * msn;
	MockConnection * mockConnection;
	
	void receive(string msg);
	void send(string msg);

	public:
  
	void setUp(void) {
		//this->mockClient = new MockClient();
		//this->mockAuth = new MockAuthentication;
		this->mockConnection = new MockConnection();
		//this->msn = new Msnp();
		this->msn = new Notification();
		//this->msn->setAuthenticationHandle(this->mockAuth);
		this->msn->setConnectionHandle(this->mockConnection);
		//this->msn-addConnectionListener(this->mockClient);
		//this->msn-addContactListener(this->mockClient);
		//this->msn->send("aa");	
		this->msn->login("dvader@empire.com", "ih8jedis");
  	} 

	void tearDown(void) {
	//	$this->msn = null;
	}

	void TestChallenger(void);
	void TestSession(void);  
};

#endif