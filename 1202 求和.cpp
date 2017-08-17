#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long long x;
	cin >> x;
	long long num = x;
	n = n - 1;
	while(n--)
	{
		cin >> x;
		num += x;
	}
	cout << num << endl;
	return 0;
}
