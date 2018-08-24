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
    int N;
    string s;
    cin>>N;
    cin>>s;
    int maxpos=0;
    int currpos=0;
    int arr[26]={0};
    for(int i =0; i<s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            dout<<"inside here "<< s[i]<<endl;
            if(arr[s[i]-97]==0)    
            {
                dout<<"currpos inc"<<endl;
                currpos++;
                arr[s[i]-97]=1;
            }
            if(currpos>maxpos)
                maxpos=currpos;
        }
        else
        {
            currpos=0;
            for(int j=0; j<26; j++)
                arr[j]=0;
        }
    }
    cout<<maxpos<<endl;
	return 0;
}
