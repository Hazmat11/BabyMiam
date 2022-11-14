#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <list>
#include <chrono>
#include <ctime>   

#include "Intake.h"

using namespace std;

void Register::Intake() {
	cout << "\nCombien de millilitres fait votre biberon ?\n";
	cin >> dose;
	dose + tm;
}

void Register::Add() {

	quantity.push_back(dose);

	cout << "the list is:" << endl;
	for (auto v : quantity)
		cout << v << "\n";

	Register::Time();
}

int Register::Time() {
	auto end = chrono::system_clock::now();

	time_t end_time = chrono::system_clock::to_time_t(end);

	tm = ctime(&end_time);

	cout << tm <<"\n";

	return 0;
}