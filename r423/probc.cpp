#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k, max=0, len, x;
	vector<char>str;
	string s;
	string:: iterator its;
	cin>>n;
	while(n--)
	{
		cin>>s;
		scanf("%d", &k);
		//len=s.length();	
		for(int i=0; i<k; i++)
		{
			scanf("%d", &x);
			if(x>max)
			{
				for(int j=max; j<x; j++)
				{
					str.push_back('.');
				}
			}
			for(its=s.begin(); its!=s.end(); its++)
			{
				if(x>max){
					str.push_back(*its);
					max=x;
				}
				else
					str[x]=*its;
				x++;
			}
		}
	}
	for(int i=1; i<=max; i++)
	{
		if(str[i]=='.')
			cout<<'a';
		else
			cout<<str[i];
	}
	return 0;
}
