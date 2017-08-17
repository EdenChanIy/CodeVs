#include<bits/stdc++.h>
using namespace std;

int main()
{
	double x,y;
	cin >> x >> y;
	int num = 0;
	for(int i=x;i<=y;i++)
	{
		if((int)((x*y)/i)/1==((x*y)/i))
		{
			bool temp = true;
			for(int j=i;j>x;j--)
			{
				if((i%j==0)&&((int)((x*y)/i)%j==0))
				{
					temp = false;
				}
			}
			if(temp==true&&((i%(int)x==0)&&((int)(x*y)/i)%(int)x==0))
			{
				num++;
			}
		}
	}
	cout << num << endl;
	return 0;
}
