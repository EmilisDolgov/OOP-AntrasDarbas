// Vidurkis.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using std::cout; using std::cin; using std::string; using std::endl;

int main()
{
	string vardas;
	string pavarde;
	double paz[5]{};
	double vidurkis{};
	double sum{};
	cin >> vardas;
	cin >> pavarde;
	for (int i = 0; i < 5; i++)
	{
		cin >> paz[i];
	}
	for (auto i : paz)
	{
		sum += i;
	}
	vidurkis = sum / 5;
	return 0;
}