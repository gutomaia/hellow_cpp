#ifndef CONNECTIONHANDLE_H
#define CONNECTIONHANDLE_H


#include "CppInterfaces.h"

using namespace std;

DeclareInterface(ConnectionHandle)
   virtual void connect(string host, int port) = 0;
   virtual void disconnect() = 0;
   virtual string nextCommand() const = 0;
   virtual int hasMoreCommands() const = 0;
   virtual void send(string cmd) = 0;
EndInterface

#endif