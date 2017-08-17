#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int m = n;
	int i;
	for(i=1;i<n;i++)
	{
		if(n>i)
		{
			n = n - i;
		}
		else break;
	}
	int num = 0;
	for(int j=0;j<=i;j++) num += j;
	if(i%2==0)
	{
		cout << i - (num - m) << "/" << i - (i - (num - m)) + 1 << endl;
	}
	if(i%2==1)
	{
		cout << 1 + (num - m) << "/" << i - (1 + (num - m)) + 1 << endl;
	}
	return 0;
} 
