#include<bits/stdc++.h>
using namespace std;
int seg_tree(
int main(){
	int n, q, c;
	cin>>n>>q>>c;
	int minx=INT_MAX, maxx=0;
	int miny=INT_MAX, maxy=0;
	int x[n], y[n], s[n];
	for(int i=0; i<n; i++){
		cin>>x[i]>>y[i]>>s[i];
		if(x[i]<minx)
		{
			minx=x[i];	
		}
		if(x[i]>maxx)
		{
			maxx=x[i];
		}
		if(y[i]<miny)
		{
			miny=y[i];
		}
		if(y[i]>maxy)
			maxy=y[i];
	}			
	return 0;
}
