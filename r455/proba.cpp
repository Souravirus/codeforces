#include<bits/stdc++.h>
#define mp make_pair
#define FOR(i,n) for(int i=0;i<n;i++)
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define FORb(i, n) for(int i=n-1; i>=0; i--)
#define lli long long int
#define ulli unsigned long long int
#define dout if(debug)cout<<" "
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    string first, last;
    cin >> first >> last;
    string ans;
    for(int i = 0; i < first.length(); i++){
        if(first[i] < last[0]){
            ans+=first[i];
        }
        else
            break;
    }

    if(ans == ""){
        ans+= first[0];
        for(int i = 1; i < first.length(); i++){
            if(first[i] < last[0]){
                ans+= first[i];
            }
            else
                break;
        }
    }
    ans+= last[0];
    cout << ans;
	return 0;
}
