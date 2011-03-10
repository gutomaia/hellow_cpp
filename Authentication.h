#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H


#include "CppInterfaces.h"

using namespace std;

DeclareInterface(Authentication)
   virtual string authenticate(string username, string password, string lc) const = 0;
EndInterface

#endif