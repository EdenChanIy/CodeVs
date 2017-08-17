#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	int m = s.size();
	for(int i=s.size()-1;i>=0;i--)
	{
		if(s[i]==' ')
		{
			for(int j=i+1;j<m;j++)
			{
				cout << s[j];
			}
			cout << " ";
			m = i;
		}
		if(i==0)
		{
			for(int j=i;j<m;j++)
			{
				cout << s[j];
			}
		}
	}
	cout << endl;
	return 0;
}
