#include<bits/stdc++.h>
using namespace std;

struct Situ{
	char squ[10][10];
	Situ()
	{
		memset(this,0,sizeof(Situ));
	}
};

int main()
{
	int n;
	cin >> n;
	Situ si[10]; 
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<n;k++)
		{
			cin >> si[0].squ[i][k];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<n;k++)
		{
			si[1].squ[k][i] = si[0].squ[n-1-i][k];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<n;k++)
		{
			si[2].squ[i][k] = si[0].squ[n-1-i][n-1-k];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<n;k++)
		{
			si[3].squ[k][i] = si[0].squ[i][n-1-k];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<n;k++)
		{
			si[4].squ[i][k] = si[0].squ[n-1-i][k];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<n;k++)
		{
			si[5].squ[i][k] = si[1].squ[n-1-i][k];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<n;k++)
		{
			si[7].squ[i][k] = si[4].squ[n-1-i][n-1-k];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<n;k++)
		{
			si[8].squ[k][i] = si[4].squ[i][n-1-k];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<n;k++)
		{
			si[9].squ[i][k] = si[4].squ[i][k];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<n;k++)
		{
			si[4].squ[i][k] = si[0].squ[i][n-1-k];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<n;k++)
		{
			si[6].squ[i][k] = si[4].squ[i][k];
		}
	}
	Situ si_;
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<n;k++)
		{
			cin >> si_.squ[i][k];
		}
	}
	int o;
	bool temp = true;
	for(o=1;o<=9;o++)
	{
		temp = true;
		for(int i=0;i<n;i++)
		{
			for(int k=0;k<n;k++)
			{
				if(si[o].squ[i][k]!=si_.squ[i][k])
				{
					temp = false;
					break;
				}
			}
			if(temp==false) break;
		}
		if(temp==true) break;
	}
	if(temp==true)
	{
		if(o==1||o==2||o==3||o==4||o==6)
		{
			cout << o << endl;
		}
		else if(o==5||o==7||o==8||o==9)
		{
			cout << 5 << endl;
		}
	}
	else
	{
		cout << 7 << endl;
	}
	return 0;	
}
