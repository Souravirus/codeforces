#include<bits/stdc++.h>
using namespace std;
int main(){
	int c, v0, v1, a, l, total;
	cin>>c>>v0>>v1>>a>>l;
	int  i=1;
	total=v0;	
	if(total>c)
		cout<<i<<endl;
	else{
		while(total<=c){
			if(total>=c)
			{
				cout<<i<<endl;
				break;
			}
			total-=l;
			int add=i*a;
			if(v0+add>v1)
			{
				total=total+v1;
			}
			else{
				total=total+v0+add;
			}
			i++;
			if(total>=c)
			{
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}
