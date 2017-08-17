#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m, n;
	while(cin>>m>>n&&m!=0&&n!=0)
	{
		int a[20][20];
		int b[20][20];
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin >> a[i][j];
			}
		}
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i-1>=0)
				{
					if(a[i][j]*a[i-1][j]>=0)
					{
						b[i][j] -= abs(a[i-1][j]);
					}
					else
					{
						b[i][j] += abs(a[i-1][j]);
					}
				}
				if(i+1<m)
				{
					if(a[i][j]*a[i+1][j]>=0)
					{
						b[i][j] -= abs(a[i+1][j]);
					}
					else
					{
						b[i][j] += abs(a[i+1][j]);
					}
				}
				if(j-1>=0)
				{
					if(a[i][j]*a[i][j-1]>=0)
					{
						b[i][j] -= abs(a[i][j-1]);
					}
					else
					{
						b[i][j] += abs(a[i][j-1]);
					}
				}
				if(j+1<n)
				{
					if(a[i][j]*a[i][j+1]>=0)
					{
						b[i][j] -= abs(a[i][j+1]);
					}
					else
					{
						b[i][j] += abs(a[i][j+1]);
					}
				}
			}
		}
		int max = -1000;
		int max_m = -1000;
		int max_n = -1000;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(b[i][j]>max)
				{
					max = b[i][j];
					max_m = i;
					max_n = j;
				}
			}
		}
		
//		for(int i=0;i<m;i++)
//		{
//			for(int j=0;j<n;j++)
//			{
//				cout << b[i][j];
//			}
//			cout << endl;
//		}
//		cout << endl;
		
		cout << max_m+1 << " " << max_n+1 << " " << max << endl;
	}
	return 0;
}
