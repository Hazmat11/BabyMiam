#pragma once
#include <SDL.h>
#include <list>

using namespace std;

class Register
{
public:
	void Intake();
	string dose;
	void Add();
	list < string > quantity;
	int Time();
	char *tm;
};