#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout << "Enter the speed limit: ";
	int limit;
	cin >> limit;
	cout << "Enter the recorded speed of the car: ";
	int now;
	cin >> now;
	if(now<=limit) cout << "Congratulations, you are within the speed limit" << endl;
	else if(now-limit>=1&&now-limit<=20) cout << "You are speeding and your fine is $ 100" << endl;
	else if(now-limit>=21&&now-limit<=30) cout << "You are speeding and your fine is $ 270" << endl;
	else if(now-limit>=31) cout << "You are speeding and your fine is $ 500" << endl;
	return 0;
} 
