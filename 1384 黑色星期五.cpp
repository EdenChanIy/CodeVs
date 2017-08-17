#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int ans[8] = {0};
	int w = 0;
	for(int i=1900;i<=1900+n-1;i++)
	{
		if((i%4==0&&i%100!=0)||i%400==0)
		{
			month[2] = 29;	
		}
		else
		{
			month[2] = 28;
		}
		for(int j=1;j<=12;j++)
		{
			for(int d=1;d<=month[j];d++)
			{
				w++;
				if(w>7) w = 1;
				if(d==13) ans[w]++;
			}
		}
	}
	cout << ans[6] << " " << ans[7] << " " << ans[1] << " " << ans[2] << " " << ans[3] << " " << ans[4] << " " << ans[5] << endl;
	return 0;
}
