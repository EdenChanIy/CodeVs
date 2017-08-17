#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int num = 0;
	for(int i=0;i<n;i++)
	{
		num += (int)(s[i] - '0') * pow(2,n-1-i);
	}
	cout << num << endl;
	return 0;
}
