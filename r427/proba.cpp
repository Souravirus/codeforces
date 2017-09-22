#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, v1, v2, t1, t2;
	cin>>n>>v1>>v2>>t1>>t2;
	int ta=n*v1+2*t1;
	//cout<<ta<<endl;
	int tb=n*v2+2*t2;
	//cout<<tb<<endl;
	if(ta<tb)
		cout<<"First"<<endl;
	else if(ta>tb)
		cout<<"Second"<<endl;
	else
		cout<<"Friendship"<<endl;
	return 0; 
}
