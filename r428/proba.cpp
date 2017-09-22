#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin>>n>>k;
	int trem=0, count=0, numc, sum=0;
	for(int i=0; i<n; i++)
	{
		cin>>numc;
		if(numc>8)
		{
			trem+=numc-8;
			sum+=8;
		}
		else
		{
			if(trem+numc>8)
			{
				sum+=8;
				trem=(trem+numc)-8;
					
			}
			else
			{
				sum+=numc+trem;
				trem=0;
			}
		}
		count++;
		if(sum>=k)
		{
			break;
		}
	}
	if(sum<k)
		cout<<-1<<endl;
	else
		cout<<count<<endl;
	return 0;
}
