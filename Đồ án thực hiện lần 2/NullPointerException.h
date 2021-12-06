#pragma once
#include <iostream>
#include<exception>
using namespace std;
class NullPointerException : public exception
{
	NullPointerException() {
		cerr << "NULL POINTER";
	}


};
