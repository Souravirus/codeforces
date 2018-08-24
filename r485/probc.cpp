#include<bits/stdc++.h>
#define mp make_pair
#define FOR(i,n) for(int i=0;i<n;i++)
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define FORb(i, n) for(int i=n-1; i>=0; i--)
#define lli long long int
#define ulli unsigned long long int
#define dout if(debug)cout<<" "
using namespace std;

struct sign{
    int s;
    int c;
};

bool comp(sign s1, sign s2){
    return (s1.c < s2.c);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin >> n;
    sign sg[n];
    for(int i = 0; i < n; i++){
        cin >> sg[i].s;
    }

    for(int i = 0; i < n; i++){
        cin >> sg[i].c;
    }

    sort(sg, sg+n, comp);

    for(int i = 0; i < n; i++){
        cout << sg[i].s << " " << sg[i].c << endl;
    }

	return 0;
}
