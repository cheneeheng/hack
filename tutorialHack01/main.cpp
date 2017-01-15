#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include<sstream>
using namespace std;

int main(int argc, char *argv[])
{

	int total_cost;



	double base; 
	int tip, tax;
	double total;

	string inputs;

	for(int i=0;i<3;i++)
	{
		getline(cin,inputs);
		stringstream parse(inputs);
		switch(i)
		{
			case 0:
				parse >> base;
				break;
			case 1:
				parse >> tip;
				break;
			case 2:
				parse >> tax;
				break;
		}
	}

	total = base + (base*tip/100) + (base*tax/100);
	total_cost = total;


	cout << "The total meal cost is " << round(total) << " dollars." << endl;

	return 0;	
}

















