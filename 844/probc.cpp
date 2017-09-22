#include<bits/stdc++.h>
#define mp make_pair
using namespace std;
int main()
{
	int num;
	cin>>num;
	int arrchk[num];
	for(int i=0; i<num; i++)
		arrchk[i]=-1;
	vector<pair<int, int> >arra;
	vector<pair<int, int> > arrb;
	int n;
	for(int i=0; i<num; i++)
	{
		cin>>n;
		arra.push_back(mp(n, i));
		arrb.push_back(mp(n, -1));
	}
	sort(arra.begin(), arra.end());
	for(int i=0; i<num; i++)
	{
		arrb[arra[i].second].second=i;
	}
	for(int i=0; i<num; i++)
	{
		if(arrchk[i]==-1)
		{
			//cout<<"hello"<<endl;
			int pos=arrb[i].second;
			vector<int> vec;
			vec.push_back(i);
			arrchk[i]=1;
			int next=arrb[i].second;
			if(pos==i)
			{
				cout<<"1 "<<i+1<<endl;
			}
			else
			{
				while(arrb[next].second!=i)
				{
					vec.push_back(next);
					arrchk[next]=1;
					next=arrb[next].second;
				}
				for(int i=0; i<vec.size(); i++)
					cout<<vec.size()<<" "<<vec[i]+1<<" ";
				cout<<endl;
			}
		}
	}
	return 0;
}
