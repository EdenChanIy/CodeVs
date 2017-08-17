#include<bits/stdc++.h>
using namespace std;
int num = 0;

void output(int n)
{
	for(int i=n/2;i>0;i--)
	{
		num++;
		output(i);
	}
}
int main()
{
	int n;
	cin >> n;
	output(n);
	cout << num + 1 << endl;
	return 0;
}
