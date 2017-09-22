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
	vector<vector<int> > ansvec;
	for(int i=0; i<num; i++)
	{
		if(arrchk[i]==-1)
		{
			//cout<<"hello"<<endl;
			int pos=arrb[i].second;
			vector<int> vec;
			vector<int> ::iterator itv;
			arrchk[i]=1;
			int next=arrb[i].second;
			if(pos==i)
			{
				vec.push_back(1);
				vec.push_back(i+1);
				ansvec.push_back(vec);
			}
			else
			{
				vec.push_back(next+1);
				while(next!=i)
				{
					arrchk[next]=1;
					next=arrb[next].second;
					vec.push_back(next+1);
				}
				//cout<<vec.size()<<" ";
				itv=vec.begin();
				int size=vec.size();
				vec.insert(itv, size);
				ansvec.push_back(vec);
			}
		}
	}
	cout<<ansvec.size()<<endl;
	for(int i=0; i<ansvec.size(); i++)
	{
		for(int j=0; j<ansvec[i].size(); j++)
			cout<<ansvec[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
