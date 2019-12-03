// Lab 11 Task 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;
int power(int n, int m)
{
	if (m > 1)
		n = n * n;
	else
		return n;
	m--;
	power(n, m);
}
int main()

{
	int x, y;

	cout << "Enter Base : ";
	cin >> x;
	cout << endl;
	cout << "Enter Exponent : ";
	cin >> y;
	cout << endl;
	cout << "The Answer is : " << power(x, y)<<endl;
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
