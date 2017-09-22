#include<bits/stdc++.h>
using namespace std;
int main()
{
	string A, B, C;
	int arr[26];
	cin>>A>>B>>C;
	string :: iterator its1;
	string :: iterator its2;
	for(its1=A.begin(), its2=B.begin(); its1!=A.end() ; its1++, its2++)
	{
		int num=*its1;
		//cout<<*its1<<" "<<num<<endl;
		int num2=*its2;
		num=num-97;
		arr[num]=num2-97-num;
	}
	//cout<<"numbers"<<endl;
	/*for(int i=0; i<26; i++)
	{
		cout<<arr[i]<<endl;
	}*/
	for(its1=C.begin(); its1!=C.end(); its1++)
	{
		if((*its1>=65 && *its1<=90))
		{
			*its1+=arr[*its1-65];
		} 
		else if(*its1>=97 && *its1<=122)
		{
			*its1+=arr[*its1-97];
		}
	}
	cout<<C;
	return 0;
}
