#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long long x;
	cin >> x;
	int max = x;
	int min = x;
	n = n - 1;
	while(n--)
	{
		cin >> x;
		if(x>max) max = x;
		if(x<min) min = x;
	}
	cout << min << " " << max << endl;
	return 0;
}
