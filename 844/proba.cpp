#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;
int main()
{
	string s;
	cin>>s;
	lli k;
	set<char>sets;
	set<char>::iterator its;
	cin>>k;
	if(s.length()<k)
	{
		cout<<"impossible"<<endl;
	}
	else
	{
		for(int i=0; i<s.length(); i++)
		{
			sets.insert(s[i]);
		}
		if(k>=sets.size())
			cout<<k-sets.size()<<endl;
		else
			cout<<"0"<<endl;
	}
	return 0;
}
