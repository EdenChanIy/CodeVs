#include<bits/stdc++.h>
using namespace std;

int a[1000][1000];
int main()
{
	memset(a,0,sizeof(a));
	int n;
	scanf("%d",&n);
	int x = 1; 
	int y = (n-1)/2;
	int z = (n-1)/2;
	int t = 0;
	int num = 0;
	a[y][z] = x;
	while(a[n-1][n-1]==0)
	{
	
		num = 0;
		if(a[y][z-1]==0) num++;
		if(a[y][z+1]==0) num++;
		if(a[y-1][z]==0) num++;
		if(a[y+1][z]==0) num++;
		if(num>=3)
		{
			t++;
		}	
		if(t%4==1)
		{
			z++;
			x++;
			a[y][z] = x;
		}
		if(t%4==2)
		{
			y--;
			x++;
			a[y][z] = x;
		}
		if(t%4==3)
		{
			z--;
			x++;
			a[y][z] = x;
		}
		if(t%4==0)
		{
			y++;
			x++;
			a[y][z] = x;
		}
	}
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout << a[i][j] << " ";
			if(i==j||(i+j)==n) sum += a[i][j];
		}
		cout << endl;
	}
	cout << sum << endl;
	return 0;
} 
