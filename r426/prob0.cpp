#include<bits/stdc++.h>
typedef long long int ulli;
using namespace std;
int main()
{
	int a[4];
	a[0]=118;
	a[1]=60;
	a[2]=94;
	a[3]=62;
	char s, e;
	ulli turns;
	cin>>s>>e;
	cin>>turns;
	turns=turns%4;
	ulli pos;
	for(int i=0; i<4; i++)
	{
		if(a[i]==s)
		{	pos=i;
			break;
		}
	}
	if(turns==0 || turns==2)
	{
		cout<<"undefined"<<endl;
	}
	else {
		ulli finposc=(pos+turns)%4;	
		//cout<<finposc<<endl;
		ulli finposa=(abs(pos-turns))%4; 
		//cout<<finposa<<endl;
		int value=0;
		int flag=0;
			if(a[finposc]==e)
			{
				 value=1;
			}
			
			if(a[finposa]==e)
			{
				value=2;	
			}
			
		if(value==1)
			cout<<"cw"<<endl;
		else if(value==2)
			cout<<"ccw"<<endl;
	}
	return 0;
}
