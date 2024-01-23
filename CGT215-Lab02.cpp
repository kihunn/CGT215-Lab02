// CGT215-Lab02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	float A;
	float B;
	float X;

	cout << "Hello, my name is Kihunn and I'm going to solve this equation:" << endl;
	cout << "Ax + B = 0" << endl;
	cout << "For x" << endl;
	cout << "" << endl;

	cout << "Please enter a value for A: ";
	cin	 >> A;
	cout << "Please enter a value for B: ";
	cin >> B;

	cout << "Solving for " << A << "x+" << B << "=0 for x...";
	cout << "" << endl;

	X = ((-B)/A);
	cout << "x=" << X;
}	