#include <iostream>

using namespace std;

int Add(int a, int b)
{
	cout << a + b << endl;

	int sum = (a + b);

	return sum;
}

int main()
{
	Add(10, 20);
}