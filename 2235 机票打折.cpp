#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a,b;
	cin >> a >> b;
	if((int)(a*(0.1*b))%10<5) cout << (int)(a*(0.1*b)/10)*10 << endl;
	else cout << (int)((a*(0.1*b)+5)/10)*10 << endl;
	return 0;
}
