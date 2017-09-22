#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;
int main()
{
    int n, x;
    cin>>n>>x;
    int flag=0, smallcount=0, num;
    for(int i=0; i<n; i++)
    {
        cin>>num;
        if(num==x)
            flag=1;
        if(num<x)
            smallcount++;
    }
    int op=0;
    if(flag==1)
        op++;
    op=op+x-smallcount;
    cout<<op;
    return 0;
}
