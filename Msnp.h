/*  HellowCpp, alpha version
 *  (c) 2010 Gustavo Maia Neto (gutomaia)
 *
 *  HellowPhp and all other Hellow flavors will be always
 *  freely distributed under the terms of an GPLv3 license.
 *
 *  Human Knowledge belongs to the World!
 *--------------------------------------------------------------------------*/

#ifndef MSNP_H
#define MSNP_H

#include "ConnectionHandle.h"
#include "CommandListener.h"

using namespace std;

class Msnp {
private:
	ConnectionHandle * connectionHandle;
	CommandListener * commandListener;

	void onCommandReceived(string command);
	void onCommandSended(string command);

protected:
	string EL;
	int _trid;
	void connect(string host, int port);
	void disconnect();
	void listen();

public:
	Msnp (void);
	
	void setConnectionHandle(ConnectionHandle *connectionHandle);
	void addCommandListener(CommandListener *commandListener);



	void send(string cmd);
	string challenger(string chl);
	
	//virtual
	void execute(string msg);
	void login(string username, string password);

	virtual string getHost(void){
	}
	
	virtual int getPort(void){
	}
};

#endif

/*
<?php
 
abstract class Hellow_Protocol_Msnp {

	var $EL = "\r\n";

	protected $_trid = 1;

	private $_connection;

	private $_connectionHandle;

	public function __construct () {
		$this->_connectionHandle = new Hellow_Core_SocketConnection;
	}

	public function setConnectionHandle($connectionHandle){
		$this->_connectionHandle = $connectionHandle;
	}

	private $_commandListener = null;

	public final function addCommandListener($commandListener){
		$this->_commandListener = $commandListener;
	}

	protected final function onCommandReceived($command){if(!empty($this->_commandListener)) $this->_commandListener->onCommandReceived($command);}
	protected final function onCommandSended($command){if(!empty($this->_commandListener)) $this->_commandListener->onCommandSended($command);}

	abstract function getHost();
	abstract function getPort();
	abstract function execute($command);

	protected final function send($cmd) {
		$this->_connectionHandle->send($cmd);
		$this->onCommandSended($cmd);
		$this->_trid++;
	}

	protected function connect($host, $port) {
		$this->_connectionHandle->connect($host, $port);
	}

	protected function disconnect() {
		$this->_connectionHandle->disconnect();
	}

	protected final function listen() {
		while ($this->_connectionHandle->hasMoreCommands()) {
			$command = $this->_connectionHandle->nextCommand();
			if (trim($command) != "") {
				$this->execute($command);
				$this->onCommandReceived($command);
			}
		}
	}
}
*/
