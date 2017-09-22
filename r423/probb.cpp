#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m, flag=0;
	cin>>n>>m;
	int bottom=-1, top=-1, right=-1, left=-1, count=0;
	char arr[n][m];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(arr[i][j]=='B')
			{
				flag=1;
				count++;
				if(left==-1)
				{
					left=j;
				}
				else if(j<left)
					left=j;
				if(right==-1)
				{
					right=j;
				}
				else if(j>right)
					right=j;
				if(top==-1)
					top=i;
				if(bottom==-1)
					bottom=i;
				else if(i>bottom)
					bottom=i;
			}
		}
	}
	//cout<<"t"<<top<<" b "<<bottom<<" l "<<left<<" r "<<right<<endl;
	int rl=right-left;
	int tb=bottom-top;
	if(!flag)
		cout<<"1";
	else if(tb>rl)
	{
		int diff=tb-rl;	
		int diffl=left-0;
		int diffr=m-1-right;
		if((diffl+diffr)>=diff)
		{
			int sqlength=tb+1;
			int area=(tb+1)*(tb+1);
			cout<<area-count;
		}
		else
		{
			cout<<"-1";
		}
	}
	else
	{
		int diff=rl-tb;	
		int diffl=top-0;
		int diffr=n-1-bottom;
		if((diffl+diffr)>=diff)
		{
			int sqlength=rl+1;
			int area=(rl+1)*(rl+1);
			cout<<area-count;
		}
		else
		{
			cout<<"-1";
		}
	}
	return 0;
}
