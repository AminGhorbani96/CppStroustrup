#include <iostream>
using namespace std;

double square(double x)
{
	return x * x;
}


// void mean : function does not return any value
void print_square(double x)
{
	cout << "The square of " << x << " is: " << square(x) << "\n";
}

int main()
{
	print_square(2.1);
}