#pragma once
#include <SDL.h>
#include <vector>

using namespace std;

class Shop
{
public:
	void PrintList();
	void AddItem();
	void CleanList();
	void Main();

private:
	vector<const char*> ItemList;
	string Prop;
	const char* Item;
};