#include<bits/stdc++.h>
using namespace std;

int main()
{
	int array[12] = {0};
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> array[i];
	}
	sort(array,array+n);
	for(int i=0;i<n;i++)
	{
		cout << array[i] << endl;
	}
	return 0;
}
