#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	double a[10] = {0};
	double b[10] = {0};
	double sum = 0;
	double rank = 0;
	for(int i=0;i<t;i++)
	{
		cin >> a[i] >> b[i];
		sum += a[i] * b[i];
		rank += a[i];
	}
	double final = sum / rank;
	cout << fixed << setprecision(2) << final << endl;
	return 0;
} 
