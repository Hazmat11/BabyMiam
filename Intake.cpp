#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <list>
#include <chrono>
#include <ctime>   

#include "Intake.h"

using namespace std;

void Register::Intake() {
	cout << "Combien de millilitres fait votre biberon ?\n";
	cin >> dose;
	cout << "\n";
}

void Register::Add() {
	quantity.push_back(dose);
	Register::Time();
	Register::Print();
}

int Register::Time() {
	auto end = chrono::system_clock::now();
	time_t end_time = chrono::system_clock::to_time_t(end);
	tm = ctime(&end_time);

	quantity.push_back(tm);

	return 0;
}

void Register::Print() {
	cout << "the list is:" << endl;
	for (auto v : quantity)
		cout << v << "\n";
}