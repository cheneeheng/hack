#include<iostream>
#include<cmath>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<sstream>
#include<iomanip>

using namespace std;


int main(int argc, char *argv[])
{
	int num,num2,num3;


	double mean=0.0;
	double median=0.0;
	int    mode=0;

	string inputs;

	getline(cin,inputs);
	stringstream parse(inputs);
	parse >> num;
	num2 = num;

	getline(cin,inputs);
	stringstream parse2(inputs);

	vector<int> data(num);
	vector<int> data2(num);

	for(int i=0;i<num;i++)
	{
		parse2 >> num2;
		data[i] = num2;
		mean += num2;
	}

	sort(data.begin(),data.end());
	if(num%2)
	{
		median = data[(num/2)];
	}
	else
	{
		median = data[(num/2)] + data[(num/2)-1];
		median /= 2;
	}

	for(int i=0;i<num;i++)
		data2[i] = 0;

	for(int i=0;i<num;i++)
		for(int ii=i+1;ii<num;ii++)
			if(data2[ii] != -1)
				if(data[i]==data[ii])
				{
					data2[i]  += 1;
					data2[ii] = -1;
				}

	int tmp = 0;
	for(int i=0;i<num;i++)
	{
		tmp = max(data2[i],tmp);
		if(tmp == data2[i])
			num3 = i;
	}

	if(tmp==0)
		mode = data[0];
	else
		mode = data[num3];

	cout << fixed << setprecision(1) << round((mean/num)*10)/10 << endl;	
	cout << fixed << setprecision(1) << round(median*10)/10 << endl;
	cout << mode << endl;	
	return 0;	
}












