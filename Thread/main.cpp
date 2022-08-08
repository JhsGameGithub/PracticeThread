#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
	int num = 0;
	system_clock::time_point start = system_clock::now();
	for (int i = 0; i < INT_MAX; i++)
		num++;
	system_clock::time_point end = system_clock::now();

	cout << duration_cast<milliseconds>(end - start).count() << "ms";
}