// Project Euler Problem 20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

long long factorial(long long n)
{
	long long total = 1;

	for (int i = 1; i < n + 1; i++)
	{
		total *= i;
	}

	return total;
}

void amicable(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "i = " << i << "    j = " << j << endl;
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	amicable(5);

	cin.clear();
	cin.ignore(255, '\n');
	cin.get();

	return 0;
}

