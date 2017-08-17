#include<iostream>
using namespace std;

int main()
{
	int m,n;
	cin >> m >> n;
	for(int i=1;i<1005;i++)
	{
		if(m<=(n*i))
		{
			cout << i << endl;
			break;
		}
	}
	return 0;
}
