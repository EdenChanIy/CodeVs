/*#include<bits/stdc++.h>
using namespace std;

int array[1000005] = {0};
int main()
{
	int n;
	cin >> n;
	int a;
	while(n--)
	{
		cin >> a;
		array[a]++;
	}
	for(int i=0;i<1000005;i++)
	{
		if(array[i]%2!=0)
		{
			cout << i << endl;
			break;
		}
	}
	return 0;
}*/


//a^a=0      0^a=a^0=a

#include<stdio.h>

int n,i,j,s;

int main(){

      for(scanf(" %d",&n);i<n;++i){

        scanf(" %d",&j);

        s^=j;

      }

 printf("%d",s);

 return 0;

}
