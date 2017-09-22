#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	vector<int>pos;
	vector<int>posc;
	string s;
	string t;
	cin>>n>>m;
	cin>>s;
	cin>>t;
	int count=n, countn=0, countm=0, min=n+1;
	while(countm+n<m)
	{
		count=n;
		for(int i=0;i<n;i++){
			if(countm+i>=m)
			{
				posc.push_back(i+1);
			}
			else{
				if(s[i]==t[countm+i])
				{
					count--;
				}
				else{
					posc.push_back(i+1);
				}
			}
		}
		if(count<min)
		{
			min=count;
			pos.clear();
			pos=posc;
		}
		posc.clear();
		countm++;
	}
	cout<<min<<endl;
	if(!pos.empty())
	{
		for(int i=0;i<pos.size();i++)
			cout<<pos[i]<<" ";
	}
	return 0;
}
