#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long long num = 0;
	for(int i=1;i<=n;i++)
	{
		num += i * i;
	}
	cout << num << endl;
	return 0;
}
