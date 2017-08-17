#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a1,a2,b1,b2,c1,c2;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	double x = 0;
	double y = 0;
	for(double i=-499;i<=499;i++)
	{
		for(double j=-499;j<=499;j++)
		{
			if((i==((c1-b1*j)/a1))&&(i==((c2-b2*j)/a2)))
			{
				x = i;
				y = j;
				break;
			}
		}
	}
	cout << "x=" << x << endl << "y=" << y << endl;
	return 0;
}
