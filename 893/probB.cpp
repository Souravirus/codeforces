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
	int n;
	cin >> n;
    int A[16];
    for(int i = 0; i < 15; i++)
        A[i] = (pow(2, i+1)-1)*pow(2,i);
    int ans = 0;
    for(int i = 0; i < 15; i++)
        if(n % A[i] == 0)
            ans = A[i];
	cout << ans << endl;
    return 0;
}
