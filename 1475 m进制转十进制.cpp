#include<bits/stdc++.h>
using namespace std;

int main()
{
	string n;
	int m;
	cin >> n >> m;
	int l = 0;
	for(int i=n.size()-1;i>=0;i--)
	{
		if(n[i]>='A'&&n[i]<='Z')
		{
			l += (n[i] - 'A' + 10) * pow(m , (n.size() - 1 - i));
		}
		else l += (int)(n[i] - '0') * pow(m , (n.size() - 1 - i));
	}
	cout << l << endl;
	return 0;
}
