#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2;
	cin >> s1 >> s2;
	int l1 = s1.size();
	int l2 = s2.size();
	if(l1<l2) swap(l1,l2);
	int j = l1;
	for(int i=0;i<l1;i++)
	{
		if(s1[i]=='.') j = i;
	}
	bool temp = true;
	for(int i=0;i<j+9;i++)
	{
		if(s1[i]!=s2[i]) temp = false;
	}
	if(temp==true) cout << "yes" << endl;
	else cout << "no" << endl;
	return 0;
}
