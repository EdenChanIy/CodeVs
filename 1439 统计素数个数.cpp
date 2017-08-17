#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 0;
	int l,r;
	cin >> l >> r;
	bool temp = true;
	for(int i=l;i<=r;i++)
	{
		temp = true;
		if(i==0) temp = false;
		if(i==1) temp = false;
		for(int j=2;j<=sqrt(i)+1;j++)
		{
			if(i%j==0&&i!=2) temp = false;
		}
		if(temp==true) n++;
	}
	cout << n << endl;
	return 0;
}
