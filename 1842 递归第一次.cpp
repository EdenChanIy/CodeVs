#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	int f[35] = {0};
	cin >> x;
	if(x>=0) cout << 5 << endl;
	else
	{
		f[1] = 11;
		f[2] = 17;
		for(int i=3;i<35;i++)
		{
			f[i] = f[i-1] + f[i-2] + 1;
		}
		cout << f[-x] << endl;
	}
	return 0;
} 
