#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a,b;
	cin >> a >> b;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]==b[0])
		{
			bool temp = true;
			for(int j=0;j<b.size();j++)
			{
				if(a[i+j]!=b[j]) temp = false;
			}
			if(temp==true)
			{
				cout << i + 1 << endl;
				break;
			}
		} 
	}
	return 0;
}
