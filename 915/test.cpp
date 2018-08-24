/*ngh_24 */

#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define	endl		'\n'
#define pii         pair<ll ,ll>
#define vll          vector<ll>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)	for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define ios         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

#define N  100005

int main()
{
	ios
	string a,b;
	cin>>a>>b;
	ll f[12]={0},i,j,f1[12]={0};
	for(i=0;i<a.size();i++)f[a[i]-'0']++;
	for(i=0;i<b.size();i++)f1[b[i]-'0']++;
	if(a.size()<b.size())
	{
		for(i=9;i>=0;i--)
		{
			for(j=0;j<f[i];j++)
				cout<<i;
		}
		return 0;
	}else
	{
		ll ff=0;
		for(i=0;i<b.size();i++)
		{
			if(f[b[i]-'0']>0)
			{
				f[b[i]-'0']--;f1[b[i]-'0']--;
				string i1,i2;
				for(ll ii=i+1;ii<b.size();ii++)i1+=b[ii];
				for(ll ii=0;ii<=9;ii++)
				{
					for(j=0;j<f[ii];j++)
					{
						i2+=(ii+'0');
					}
				}
			//	cout<<i1<<" "<<i2<<"\n";
				if(i==b.size()-1||i1>=i2)
				{
					cout<<(b[i]-'0');
				}
				else
				{
					ff=1;f[b[i]-'0']++;f1[b[i]-'0']++;break;
				}
			}
			else
			{
				ff=1;break;
			}
		}
		if(ff==1)
		{
			for(j=9;j>=0;j--)
			{
				if(f[j]>0&&j<b[i]-'0'){cout<<j;f[j]--;break;}
			}
			for(i=9;i>=0;i--)
			{
				for(j=0;j<f[i];j++){cout<<i;}
			}
		}
	}
	return 0;
}
