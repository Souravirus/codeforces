#include<bits/stdc++.h>
using namespace std;
double length;
double n;
map<int, set<int> > mymap;
map<int, set<int> > ::iterator itm;
set<int>traversed;
void enter(int a, int b)
{
	itm=mymap.find(a);
	if(itm!=mymap.end())
	{
		itm->second.insert(b);
	}
	else
	{
		set<int> myset;
		myset.insert(b);
		mymap.insert(make_pair<int, set<int> >, (a, myset);
	}
}

double dfs(int start)
{
	itm=mymap.find(start);			
	if(itm!=mymap.end())
	{
		for	
	}
}

int main()
{
	cin>>n;
	double ans;
	for(int i=1; i<n; i++)
	{
		cin>>a>>b;	
		enter(a, b);
		enter(b, a);
	}
	ans=dfs(1);
	return 0;
}
