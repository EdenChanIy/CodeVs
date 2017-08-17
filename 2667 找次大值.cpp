#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a;
	int max = -10001;
	int smax = -10001;
	for(int i=0;i<n;i++)
	{
		cin >> a;
		if(a>max)
		{
			int temp = a;
			smax = max;
			max = temp;
		}
		else if((a<max||a==max)&&a>smax)
		{
			int temp = a;
			smax = temp;
		}
	}
	cout << smax << endl;
	return 0;
} 
