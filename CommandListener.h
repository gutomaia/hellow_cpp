#ifndef COMMANDLISTENER_H
#define COMMANDLISTENER_H

#include "CppInterfaces.h"

using namespace std;

DeclareInterface(CommandListener)
	virtual void onCommandReceived(string command) = 0;
	virtual void onCommandSended(string command) = 0;
EndInterface

#endif