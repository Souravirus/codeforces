#include<bits/stdc++.h>
#define mp make_pair
typedef long long int lli;
using namespace std;
int main()
{
    lli n;
    cin>>n;
    vector<pair<lli, lli> > vect;
    lli num1, num2;
    for(lli i=0; i<n-1; i++)
    {
        cin>>num1>>num2;
        vect.push_back(mp(num1, num2));
    }
    sort(vect.begin(), vect.end());
    lli arr[n+1]={0}, counte=0, counto=0;
    for(lli i=0; i<n-1; i++)
    {
        cout<<vect[i].first<<" "<<vect[i].second<<endl;
        if(arr[vect[i].first]==0 && arr[vect[i].second]==0)
        {
            arr[vect[i].first]=1;
            arr[vect[i].second]=2;
            counte++;
            counto++;
        }
        else if(arr[vect[i].first]==0)
        {
            arr[vect[i].first]=arr[vect[i].second]+1;
            if(arr[vect[i].first]==3)
            {
                counto++;
                arr[vect[i].first]=1;
            }
            else
                counte++;
        }
        else if(arr[vect[i].second]==0)
        {
            arr[vect[i].second]=arr[vect[i].first]+1;
            if(arr[vect[i].first]==3)
            {
                counto++;
                arr[vect[i].second]=1;
            }
            else
                counte++;
        }
        //cout<<"counte"<<counte<<" counto"<<counto<<endl;
    }
   lli mul=counte*counto;
   cout<<mul-(n-1)<<endl;
}
