// DLLTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


extern "C" __declspec(dllimport) void CallTestFunc();

int _tmain(int argc, _TCHAR* argv[])
{
	CallTestFunc();
	return 0;
}
