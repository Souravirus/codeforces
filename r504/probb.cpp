#include<bits/stdc++.h>
#define mp make_pair
#define FOR(i,n) for(int i=0;i<n;i++)
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define FORb(i, n) for(int i=n-1; i>=0; i--)
#define lli long long int
#define ulli unsigned long long int
#define dout if(debug)cout<<" "
#define mod 1000000007
using namespace std;

int debug = 0;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    lli n, k;
    cin >> n >> k;
    lli ans;

    if(n >= k){
        n = k-1;
    }

    dout << "n:" << n << "k:" << k << endl;

    lli sub = k-n;

    if(k > n+n-1){
        ans = 0;
    }

    else
        ans = (n - (sub+n)/2);

    cout << ans << endl; 
	return 0;
}
