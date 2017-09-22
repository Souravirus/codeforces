#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int flagi=0, flagc=0, flagd=0;
	int flag=0;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		if(i)
		{
			if(arr[i]>arr[i-1])
			{		
				if(flagc==0 && flagd==0)
				{
					flagi=1;
				}
				else
				{
				//	cout<<"at i"<<" "<<i<<endl;
					flag=1;
				}
			}
			if(arr[i]==arr[i-1])
			{
				if(flagd==0)
				{
					flagc=1;
					flagi=1;	
				}
				else
				{
				//	cout<<"at c"<<" "<<i<<endl;
					flag=1;
				}
			}
			if(arr[i]<arr[i-1])
			{
				flagd=1;
				flagc=1;
				flagi=1;
			}
		}
	}
	if(!flag)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
