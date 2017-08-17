#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int F[50] = {0};
	F[0] = 1;
	F[1] = 1;
	for(int i=2;i<50;i++)
	{
		F[i] = F[i-1] + F[i-2];
	}
	cin >> n;
	cout << F[n-1] << endl;
	return 0;
}
