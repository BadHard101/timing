#include <iostream>
#include <ctime>
using namespace std;

void func(){}

int main()
{
	srand(time(NULL));

	unsigned int start_time;
	unsigned int end_time;

	start_time = clock();
	func();
	end_time = clock();

	cout << "time: "
		<< (end_time - start_time) / 1000.0
		<< " sec\n\n";
}