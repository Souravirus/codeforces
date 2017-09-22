#include<bits/stdc++.h>
using namespace std;
int main(){
	int k;
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	char n[100000];
	cin>>k;
	cin.ignore();
	int cnt=0;
	while(cin.peek()!='\n')
	{
		cin>>n[cnt];
		cnt++;
	}
	int sum=0;
	for(int i=0; i<cnt; i++)
	{
		sum+=n[i]-48;	
	}
//	cout<<"sum"<<sum<<endl;
	sort(n, n+cnt);
	if(sum<k)
	{
		int diff=k-sum;
//		cout<<"diff"<<diff<<endl;
		int sumc=0;
		int countd=0;
		for(int i=0; i<cnt; i++)
		{
			countd++;
			sumc+=9-(n[i]-48);	
//			cout<<"sumc"<<sumc<<endl;
			if(sumc>=diff)
			{
				break;
			}
		}
		cout<<countd<<endl;
	}
	else
		cout<<"0"<<endl;
	return 0; 
}
