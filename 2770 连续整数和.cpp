#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int k;
	cin >> n;
	cin >> k;
	int first_num;
	//(2*a+k-1)*k/2=n
	//k^2+2*a*k-k=2n
	//a=(2*n+k-k^2)/k/2
	first_num = (2*n+k-pow(k,2))/k/2;
	cout << first_num;
	for(int i=1;i<k;i++)
	{
		cout << " " << first_num + i;
	}
	cout << endl;
	return 0;
}
