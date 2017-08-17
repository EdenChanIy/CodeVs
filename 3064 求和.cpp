#include<bits/stdc++.h>
using namespace std;

int main()
{
	double x;
	cin >> x;
	double sum = 0;
	int i;
	for(i=1;i<5000005;i++)
	{
		sum += (double)1 / (double)i;
		if(sum>=x) break;
		else if(i==5000000&&sum<x)
		{
			cout << "Error!" << endl;
			break;
		}
	}
	if(i!=5000000)cout << i << endl;
	return 0;
}
