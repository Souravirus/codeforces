#include<bits/stdc++.h>
#define mp make_pair
#define FOR(i,n) for(int i=0;i<n;i++)
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define FORb(i, n) for(int i=n-1; i>=0; i--)
#define lli long long int
#define ulli unsigned long long int
#define dout if(debug)cout<<" "
using namespace std;

int debug = 1;

string t0 = "What are you doing at the end of the world? Are you busy? Will you save us?";

string t1 = "What are you doing while sending\"";
string t2 = "\"? Are you busy? Will you send \"";
string t3 = "\"?";
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    lli q;
    cin >> q;
    cout << t3 << endl;

    lli n, k;
    for(int i = 0; i < q; i++){
        cin >> n >> k;
    }
	return 0;
}
