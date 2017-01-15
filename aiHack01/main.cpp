#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main(int argc, char *argv[])
{

/*
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;

    cin >> a >> b >> c >> d >> e;

	vector<long int> data1(5);
	vector<long int> data2(5);

	data1[0] = a;
	data1[1] = b;
	data1[2] = c;
	data1[3] = d;
	data1[4] = e;
	

	int tmp = 4;
	while (tmp>=0)
	{
		for (int i = 0;i<5;i++)
		{
			if(i==tmp) continue;
			data2[tmp] += data1[i]; 
		}
		tmp--;
	}

	sort(data2.begin(),data2.end());

	cout << data2[0] << " " << data2[4] << endl;
*/

/*
	int n = 26;
    vector<int> h(n);
    for(int h_i = 0;h_i < n;h_i++){
       cin >> h[h_i];
    }

    string word;
    cin >> word;

	int tmp = 0;
    for(int i = 0;i < word.length();i++){
       tmp = max(h[int(word.at(i))-int('a')],tmp);
    }

	cout << (int)tmp*word.length() << endl;
*/

/*
int s;
int t;
cin >> s >> t;
int a;
int b;
cin >> a >> b;
int m;
int n;
cin >> m >> n;
vector<int> apple(m);
for(int apple_i = 0;apple_i < m;apple_i++){
   cin >> apple[apple_i];
}
vector<int> orange(n);
for(int orange_i = 0;orange_i < n;orange_i++){
   cin >> orange[orange_i];
}

int apple_num, orange_num;

apple_num = 0;

for(int apple_i = 0;apple_i < m;apple_i++){
   if(apple[apple_i]>=s-a && apple[apple_i]<=t-a)
		apple_num++;
}

orange_num = 0;
for(int orange_i = 0;orange_i < n;orange_i++){
   if(orange[orange_i]<=t-b && orange[orange_i]>=s-b)
		orange_num++;
}

cout << apple_num << endl;
cout << orange_num << endl;
*/



    return 0;
}

















