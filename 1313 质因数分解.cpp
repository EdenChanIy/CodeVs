#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int i = 0;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) break;
	}
	cout << n / i << endl;
	return 0;
}
