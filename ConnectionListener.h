#ifndef CONNECTIONLISTENER_H
#define CONNECTIONLISTENER_H


#include "CppInterfaces.h"

using namespace std;

DeclareInterface(ConnectionListener)
   virtual void onLogged() = 0;
   virtual void onConnected() = 0;
EndInterface

#endif