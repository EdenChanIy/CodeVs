#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	bool temp = true;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) temp = false;
	}
	if(temp==true) cout << "prime" << endl;
	else cout << "composite" << endl;
	return 0;
}
