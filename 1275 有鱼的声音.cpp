#include<bits/stdc++.h>
using namespace std;

int main()
{
	int array[4] = {0};
	for(int i=0;i<4;i++)
	{
		cin >> array[i];
	}
	int num1 = 0;
	int num2 = 0;
	for(int i=1;i<4;i++)
	{
		if(array[i]-array[i-1]==0) num2++;
		if(array[i]-array[i-1]>0) num1++;
		if(array[i]-array[i-1]<0) num1--;
	}
	if(num1==3) cout << "Fish Rising" << endl;
	else if(num1==-3) cout << "Fish Diving" << endl;
	else if(num2==3) cout << "Fish At Constant Depth" << endl;
	else cout << "No Fish" << endl;
}
