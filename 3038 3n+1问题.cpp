#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int n;
	int num = 0;
	while(t--)
	{
		num = 0;
		cin >> n;
		while(n!=1)
		{
			if(n%2==0)
			{
				n = n / 2;
				num++;
			}
			else
			{
				n = 3 * n + 1;
				num++;
			}
		}
		cout << num << endl;
	}
	return 0;
}
