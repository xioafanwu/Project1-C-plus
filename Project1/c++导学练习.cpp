#include <iostream>
using namespace std;

double square(double x)
{
	return x * x;
}

void print_square(double x)
{
	cout << "the square of" << x << "is" << square(x) << "\n";
}

void some_function()
{
	double d = 2.2;
	int i = 7;
	d = d + i;
	i = d * i;
	cout << "the i" << i << " is" << i << "\n";
}

int main()
{
	print_square(1.234);
	some_function();
}
