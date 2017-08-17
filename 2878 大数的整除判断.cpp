#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string s1,s2;
	cin >> s1 >> s2;
	if(s1[s1.size()-1]=='0'||s1[s1.size()-1]=='5'||s2[s2.size()-1]=='0'||s2[s2.size()-1]=='5') cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
