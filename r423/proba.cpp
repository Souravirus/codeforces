#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, a, b, t, count=0;
	cin>>n>>a>>b;
	for(int i=0; i<n; i++)
	{
		cin>>t;
		if(t==1)
		{
			if(!a)
			{
				if(b)
				{
					b--;
					a++;
				}
				else
					count++;
			}
			else
				a--;
		}
		else if(t==2)
		{
			if(b)
				b--;
			else
				count+=2;
		}
	}
	cout<<count;
	return 0;
}
