#include<bits/stdc++.h>
using namespace std;

int vis[1000500];

int main()
{
	int n;
	int min = 99999999, max = 0, start, end, milked = 0, notmilked = 0;
	memset(vis,0,sizeof(vis));
	cin >> n;
	while(n--)
	{
		cin >> start >> end;
		if(end>max) max = end;
		if(start<min) min = start;
		vis[start]++;
		vis[end]--;
	}
	int sum = 0, count = 0, flag = 0;
	for(int i=min;i<=max;i++)
	{
		sum += vis[i];
		if(flag==0)
		{
			if(sum==0)
			{
				flag = 1;
				if(milked<count) milked = count;
				count = 0;
			}
			count++;
		}
		else
		{
			if(sum>0)
			{
				flag = 0;
				if(notmilked<count) notmilked = count;
				count = 0;
			}
			count++;
		}
	}
	cout << milked << " " << notmilked << endl;
	return 0;
}
