#include <iostream>
#include <chrono>
#include <ctime>   

using namespace std;

int time()
{
	// Some computation here
	auto end = chrono::system_clock::now();

	time_t end_time = chrono::system_clock::to_time_t(end);

	cout << "finished computation at " << ctime(&end_time)
		<< endl;

	return 0;
}