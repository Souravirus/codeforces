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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%3 == 0){
            cout << "YES" << endl;
        }

        else if(n%3 == 1){
            if(n >= 7)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }

        else if(n%3 == 2){
            if(n >= 14){
                cout << "YES" << endl;
            }

            else{
                cout << "NO" << endl;
            }
        }
    }
	return 0;
}
