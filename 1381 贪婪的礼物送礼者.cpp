#include<bits/stdc++.h>
using namespace std;

struct Person
{
	char name[14];
	int money;
};

int main()
{
	Person p[12];
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> p[i].name;
		p[i].money = 0;
	}
	string name_;
	int money_;
	int num_;
	for(int o=0;o<n;o++)
	{
		money_ = 0;
		num_ = 0;
		cin >> name_ >> money_ >> num_;
		for(int i=0;i<n;i++)
		{
			bool temp = true;
			if(name_.size()!=strlen(p[i].name)) temp = false;
			else
			{
				for(int k=0;k<name_.size();k++)
				{
					if(name_[k]!=p[i].name[k]) temp = false;
				}		
			}
			if(temp)
			{
				if(num_!=0)
				{
					p[i].money = p[i].money - money_/num_*num_;
				}
			}
		}
		for(int i=0;i<num_;i++)
		{
			cin >> name_;
			for(int j=0;j<n;j++)
			{
				bool temp = true;
				if(name_.size()!=strlen(p[j].name)) temp = false;
				else
				{
					for(int k=0;k<name_.size();k++)
					{
						if(name_[k]!=p[j].name[k]) temp = false;
					}
				}
				if(temp)
				{
					if(num_!=0)
					{
						p[j].money += money_/num_;
					}
				}
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout << p[i].name << " " << p[i].money << endl;
	}
	return 0;
}
