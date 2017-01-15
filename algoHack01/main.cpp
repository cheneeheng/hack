#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{

	char last;

	int num_cases;
	int len;

	int counter;
	int val;

	string input;

	cin >> num_cases;
	cin.ignore();

	for(int i=0;i<num_cases;i++)
	{
		getline(cin,input);
		len = input.length();
		counter = 0;

		for(int ii=0;ii<len/2;ii++)
		{	
			while (int(input.at(ii)) - int(input.at(len-1-ii)) > 0)
			{
				last = char(int(input.at(ii))-1);
				string tmp(1,last);
				input.replace(ii,1,tmp);
				counter++;
			}			
			while (int(input.at(ii)) - int(input.at(len-1-ii)) < 0)
			{
				last = char(int(input.at(len-1-ii))-1);
				string tmp(1,last);
				input.replace(len-1-ii,1,tmp);
				counter++;
			}
		}

/*
		val = 0;
		for(int ii=0;ii<len/2;ii++)
		{	
			while(int(input.at(ii)) - int('a') > val)
			{
				last = char(int(input.at(ii))-1);
				string tmp(1,last);
				input.replace(ii,1,tmp);
				counter++;
			}
			val++;
		}
		val = 0;
		for(int ii=0;ii<len/2;ii++)
		{	
			while(int(input.at(len-1-ii)) - int('a') > val)
			{
				last = char(int(input.at(len-1-ii))-1);
				string tmp(1,last);
				input.replace(len-1-ii,1,tmp);
				counter++;
			}
			val++;
		}
*/
		cout << counter << endl;
	}

	return 0;	
}

















