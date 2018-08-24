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
    ulli a, b, ans;
    cin >> a >> b;
    int flag5 = 0;

    if(b - a >= 5){
        flag5 = 1;
    }

    int flag2 = 0;

    if(b - a >= 2){
        flag2 = 1;
    }

    if(flag5 == 1 && flag2 == 1){
        cout << "0" << endl;
    }

    else {
        ans = 1;
        for(ulli i= a+1; i <= b; i++){
            ans*= (i%10);
        }
        ans = ans % 10;
        cout << ans << endl;
    }

	return 0;
}
