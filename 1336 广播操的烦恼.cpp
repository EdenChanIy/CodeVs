#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int m;
		cin >> m;
		int a[50001] = {0};
		for(int i=0;i<m;i++)
		{
			cin >> a[i];
		}
		int num;
		sort(a,a+m);
		if(m%2==0)
		{
			num = a[m/2-1];
		}
		if(m%2!=0)
		{
			num = a[m/2];
		}
		cout << num;
		int time = 0;
		for(int i=0;i<m;i++)
		{
			time += abs(num-a[i]);
		}
		cout << " " << time << endl;
	}
	return 0;
}
