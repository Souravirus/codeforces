#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,  ans, max;
	float a, pa, na, sub;
	cin>>n>>a;
	pa=(n-2)*180/n;
	cout<<pa<<endl;
	 max=n-2;
	sub=pa/max;	
	int i=1;
	if(i==max)
		cout<<"1"<<" "<<"2"<<" "<<"3";
	else{
		int flag=0;
		while(i<max){
			na=pa-sub;
			if(abs(pa-a)>abs(na-a))
			{
				if(na-a>0)
				{
					pa=na;
					i++;
					continue;
				}
				else{
					cout<<"1"<<" "<<"2"<<" "<<2+i+1<<endl;
					flag=1;
					break;
				}
			}
			else{
				cout<<"1"<<" "<<"2"<<" "<<2+i<<endl;
				flag=1;
				break;
			}
		}
		if(!flag)
		{
			//cout<<"hello"<<endl;
			cout<<"1"<<" "<<"2"<<" "<<2+i<<endl;
		}
	}
	return 0;
}
