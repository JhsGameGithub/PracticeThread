#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
using namespace chrono;


int main()
{
	int shared_memory(0);
	auto count_func = [&]() {
		for (int i = 0; i < 1000; i++)
		{
			shared_memory++;
		}
	};

	thread t1 = thread(count_func);
	thread t2 = thread(count_func);

	t1.join();
	t2.join();

	cout << shared_memory;
}