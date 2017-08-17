#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,m = 0;
	cin >> n;
	cout << n << "=";
	int i = 0;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			m = n / i;
			break;
		}
		else
		{
			cout << n << endl;
			return 0;
		}
	}
	cout << i;
	for(i=2;i<=m;i++)
	{
		while(m%i==0)
		{
			cout << '*' << i;
			m = m / i;
		}
	}
	cout << endl;
	return 0;
}
