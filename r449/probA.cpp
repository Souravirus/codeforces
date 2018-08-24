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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    int l, r;
    char c1, c2;
    for(int i = 0; i < m; i++){
        cin >> l >> r >> c1 >> c2;
        for(int j = l-1; j <= r-1; j++){
            if(s[j] == c1){
                s[j] = c2;
            }
        }
    }

    cout << s << endl;
	return 0;
}
