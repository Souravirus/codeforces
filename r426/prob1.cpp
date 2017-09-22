#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	int arr[27];
	int arrs[27];
	for(int i=1; i<=26; i++){
		arr[i]=-1;
		arrs[i]=-1;
	}
	cin>>n>>k;
	char c;
	char s[n+1];

		cin.ignore();
	for(int i=1; i<=n; i++)
	{
		if(cin.peek()=='\n')
			break;
		cin>>c;
		arr[c-48]=i;
		if(arrs[c-48]==-1)
			arrs[c-48]=i;
		s[i]=c;
	}
	int count=0;
	int flag=0;
	for(int i=1; i<=n; i++)
	{
	//	cout<<s[i]<<" ";
		if(arrs[s[i]-48]==i)
			count++;
		if(arr[s[i]-48]==i)
			count--;
		if(count>k)
		{
			flag=1;	
			break;
		}
	//	cout<<count<<endl;
	}
	if(flag==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
