#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	lli n, m;
	lli arr[50][50];
	lli sumstorer[70];	
	lli sumstorec[70];
	lli tsum=0;
	for(int i=1; i<=70; i++)
	{
		sumstorer[i]=-1;
		sumstorec[i]=-1;
	}
	cin>>n>>m;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0; i<n; i++)
	{
		lli countw=0;
		lli countb=0;
		for(int j=0; j<m; j++)
		{
			if(arr[i][j]==0)
				countb++;
			else
				countw++;
		}
		if(sumstorer[countw]==-1)	
		{
			lli sum=pow(2, countw);
			sum=sum-1;
			sumstorer[countw]=sum;
		}
		tsum+=sumstorer[countw];
		if(sumstorer[countb]==-1)	
		{
			lli sum=pow(2, countb);
			sum=sum-1;
			sumstorer[countb]=sum;
		}
		tsum+=sumstorer[countb];

	}
//	cout<<"tsum after row "<<tsum<<endl;
	for(int i=0; i<m; i++)
	{
		lli countw=0;
		lli countb=0;
		for(int j=0; j<n; j++)
		{
			if(arr[j][i]==0)
				countb++;
			else
				countw++;
		}
//		cout<<"countb"<<countb<<endl;
//		cout<<"countw"<<countw<<endl;
		if(sumstorec[countw]==-1)
		{
			lli sum=pow(2, countw);
			sum=sum-countw-1;
			sumstorec[countw]=sum;
		}
		tsum+=sumstorec[countw];
		if(sumstorec[countb]==-1)
		{
			lli sum=pow(2, countb);
			sum=sum-countb-1;
			sumstorec[countb]=sum;
		}
		tsum+=sumstorec[countb];

	}
	cout<<tsum<<endl;
	return 0;
}
