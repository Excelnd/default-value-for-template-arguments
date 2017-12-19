// default value for template arguments.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template <class T, class U  = char>
class A {
public:
	T x;
	U y;
	A() { cout << "Constructor Called" << endl; }
};

int main()
{
	A<char> a; // A<char, char> calling ....
	
    return 0;
}

