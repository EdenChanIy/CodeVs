#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int a[10001] = {0};
	int num;
	while(t--)
	{
		cin >> num;
		a[num]++;
	}
	int sum = 0;
	int max = -1;
	int min = 100000;
	for(int i=0;i<10001;i++)
	{
		sum += a[i] * i;
	}
	for(int i=10000;i>=0;i--)
	{
		if(a[i]!=0)
		{
			max = i;
			break;
		}
	}
	for(int i=0;i<10001;i++)
	{
		if(a[i]!=0)
		{
			min = i;
			break;
		}
	}
	cout << sum << endl << max << endl << min << endl;
	for(int i=10000;i>=0;i--)
	{
		if(a[i]!=0) cout << i << endl;
	}
	return 0;
}
