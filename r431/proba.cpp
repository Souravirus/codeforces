#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int flag=0;
    if(arr[0]%2==0 || arr[n-1]%2==0)
    {
        flag=1;
    }
    else
    {
        if(n%2==0)
        {
            flag=1;
        }
    }
    if(flag==1)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
    return 0;
}
