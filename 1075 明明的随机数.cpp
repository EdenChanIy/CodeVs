#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int m[105]={0};
	for(int i=0;i<t;i++)
	{
		cin >> m[i];
	}
	int n[105]={0};
	int k = 0;
	for(int i=0;i<t;i++)
	{
		bool temp = true;
		for(int j=0;j<i;j++)
		{
			if(m[i]==m[j]) temp = false;
		}
		if(temp==true) n[k++] = m[i]; 
	}
	sort(n,n+k);
	cout << k << endl;
	for(int i=0;i<k;i++)
	{
		cout << n[i];
		if(i!=k-1) cout << " ";
	}
	cout << endl;
	return 0;
} 
