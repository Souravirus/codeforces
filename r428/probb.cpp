#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin>>n>>k;
	int arr[k];
	for(int i=0; i<k; i++)
	{
		cin>>arr[i];
	}
	sort(arr, arr+k); 
	int quads=n;
	int duos=n*2;
	int single=0;
	int flag=0;
	for(int i=0; i<k; i++)
	{
		int quadiv=arr[i]/4;
		if(quadiv!=0)
		{
			if(quads>=quadiv )
			{
				quads-=quadiv;
			}	
			else
			{
				int diff=quadiv-quads;
				quads=0;
				if(single>diff*4)
				{
					single-=diff*4;
				}
				if(duos>=(diff*2))
				{
					duos-=diff*2;
				}
				else
				{
					flag=1;
					break;
				}
			}
		}
		int quadrem=arr[i]%4;
		int duodiv=quadrem/2;
		if(duodiv!=0)
		{
			if(duos>=duodiv)
			{
				duos-=duodiv;
				//cout<<"duos left"<<duos<<endl;
			}
			else
			{
				int diff=duodiv-duos;
				duos=0;
				if (single>=diff*2)
				{
					single-=diff*2;
				}
				else if(quads>=diff)
				{
					quads-=diff;
					single++;
				}
				else
				{
					flag=1;
					break;
				}
			}
		}
		int duorem=quadrem%2;
		//cout<<"duorem "<<duorem<<endl;
		if(duorem==1)
		{
			if(single)
				single--;
			else if(quads)
			{
				quads--;
				duos++;
		//		cout<<"quads and duos"<<quads<<" "<<duos<<endl;
			}
			else if(duos)
			{
				duos--;
			}
			else
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
	{
		cout<<"NO"<<endl;
	}
	else
		cout<<"YES"<<endl;
	return 0;
}
