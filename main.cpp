// Vidurkis.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <vector>
#include <random>
#include <fstream>
#include <sstream>
#include <limits>
#include <stdlib.h>
#include <chrono>
#include <list>
#include <deque>
#include "Mokinys.h"



using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::array;
using std::list;
using std::deque;
using std::vector;
using std::ifstream;
using std::ofstream;
using std::stringstream;


int main()
{
	double vidurkis{};
	timedgen(10);
	timedgen(100);
	timedgen(1000);
	timedgen(10000);
	timedgen(100000);
	cout << endl;
	vector<Mokinys> b;
	timedproc(b, 10);
	timedproc(b, 100);
	timedproc(b, 1000);
	timedproc(b, 10000);
	timedproc(b, 100000);
	timedprocwdel(b, 10);
	timedprocwdel(b, 100);
	timedprocwdel(b, 1000);
	timedprocwdel(b, 10000);
	timedprocwdel(b, 100000);
	
	cout << endl;
	return 0;
}