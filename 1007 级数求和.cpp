#include<bits/stdc++.h>
using namespace std;

int main()
{
	double k;
	cin >> k;
	double sum = 0;
	int i;
	for(i=1;i<1000005;i++)
	{
		sum += (double)1 / (double)i;
		if(sum>k) break;
	}
	cout << i << endl;
	return 0;
}
