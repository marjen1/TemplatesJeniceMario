// Jenice Mario
// CIS 1202 5T1
// July 31, 2022


#include <iostream>
using namespace std;


template <typename T>
T half(T value)
{
	return value / 2;
	{
		if (value * 2 != value)
		{
			value++;
		}
	}
	return value;
}


int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << "\n";
	cout << half(b) << "\n";
	cout << half(c) << "\n";
}

