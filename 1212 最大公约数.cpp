#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a,b;
	cin >> a >> b;
	long long c = 0;
	if(b>a) swap(a,b);
	while(a%b!=0)
	{
		c = b;
		b = a % b;
		a = c;
	}
	cout << b << endl;
	return 0;
} 
