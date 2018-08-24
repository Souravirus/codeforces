#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define FOR(i,n) for(int i=0;i<n;i++)
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define FORb(i, n) for(int i=n-1; i>=0; i--)
#define lli long long int
#define ulli unsigned long long int
#define dout if(debug)cout<<" "
int debug=0;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int T;
    cin>>T;
    int num1=-1, num2=-1;
    int count1=0, count2=0;
    int a;
    int flag=0;
    for(int i=0; i<T; i++) 
    {
        cin>>a;
        if(i==0)
        {
            num1=a;
            count1++;
        }
        else if(a!=num1 && num2==-1)
        {
            num2=a;
            count2++;
        }
        else if(a==num1)
            count1++;
        else if(a==num2)
            count2++;
        else
        {
            flag=1;
            dout<<"in first"<<endl;
            //break;
        }
    }
    if(count1!=count2)
    {
        flag=1;
        dout<<"in second"<<endl;
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<num1<<" "<<num2<<endl;
    }
	return 0;
}
