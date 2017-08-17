#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	int s[25] = {0};
	int k = 0;
	int l = 0;
	while(n!=0)
	{
		l = n % m;
		n = n / m;
		k++;
		s[k] = l;
	}
	for(int i=k;i>=1;i--)
	{
		if(s[i]>=10)
		{
			cout << (char)(s[i] + 55);
		}
		else cout << s[i];
	}
	cout << endl;
	return 0;
} 
