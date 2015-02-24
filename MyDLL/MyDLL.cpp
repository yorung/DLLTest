// MyDLL.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

class A {
public:
	A() { OutputDebugStringA("A::A() called!\n"); }
	~A() { OutputDebugStringA("A::~A() called!\n"); }
}a;

class B {
public:
	B() { OutputDebugStringA("B::B() called!\n"); }
	~B() {
		OutputDebugStringA("B::~B() called!\n");
		*(int*)4 = 0;	// access violation
	}
}b;

class C {
public:
	C() { OutputDebugStringA("C::C() called!\n"); }
	~C() { OutputDebugStringA("C::~C() called!\n"); }
}c;


extern "C" __declspec(dllexport) void CallTestFunc()
{
	OutputDebugStringA("CallTestFunc called!\n");
}
