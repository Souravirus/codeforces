#include<bits/stdc++.h>
using namespace std;
typedef int lli;
void func(map<lli, vector<lli> > myset, lli arr[], lli ele, lli parent)
{
    map<lli, vector<lli> > :: iterator itm;
    vector<lli>:: iterator itv;
    itm=myset.find(ele);
    //cout<<"with "<<ele<<endl;
    if(itm!=myset.end())
    {
     // cout<<"itm found"<<endl;
      // cout<<"itm second size"<<itm->second.size()<<endl;
        for(itv=itm->second.begin(); itv!=itm->second.end();itv++ )
        {
            if(*itv!=parent)
            { 
          //     cout<<"itv"<<*itv<<endl;
                arr[*itv]=(arr[ele]+1)%2;
                func(myset, arr, *itv, ele); 
            }
        }
    }
    //cout<<"returning"<<endl;
}
int main()
{
    lli N;
    cin>>N;
    lli num1, num2; 
    map<lli,vector<lli> >myset;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0; i<N-1; i++)
    {
        cin>>num1>>num2;
        if(num1>num2)
        {
            lli temp=num1;
            num1=num2;
            num2=temp;
        }
        myset[num1].push_back(num2);
        myset[num2].push_back(num1);
    }
    lli arr[N+2];
    arr[1]=0;
    func(myset, arr, 1, 0);
    lli counto=0, counte=0;
    for(int i=1; i<=N; i++)
    {
//        cout<<"for "<<i<<" "<<arr[i]<<endl;
        if(arr[i]==0)
            counte++;
        else
            counto++;
    }
    lli mul=counto*counte;
    cout<<mul-(N-1)<<endl;
    return 0;
}
