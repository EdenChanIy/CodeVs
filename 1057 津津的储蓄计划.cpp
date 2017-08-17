#include<bits/stdc++.h>
using namespace std;

int main()
{
	int savings = 0;
	int money = 0;
	int spends = 0;
	bool temp = true;
	for(int i=0;i<12;i++)
	{
		cin >> spends;
		money += 300;
		if(spends>money)
		{
			temp = false;
			cout << -(i+1) << endl;
			break;
		}
		savings += 100 * ((money-spends) / 100);
		money = money - spends - 100 * ((money-spends) / 100);
		if(i==11)
		{
			savings = savings * 1.20;
		}
		spends = 0;
	}
	if(temp==true) cout << savings + money << endl;
	return 0;
}
