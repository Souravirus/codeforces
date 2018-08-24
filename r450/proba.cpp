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
    lli t;
    cin >> t;
    lli pos = 0, neg = 0, num1, num2;
    for(int i = 0; i < t; i++){
        cin >> num1; 
        cin >> num2;
        if(num1 > 0)
            pos++;
        else
            neg++;
    }
//    cout << pos << neg << endl;
    if(pos == 0 || pos == 1 || neg == 1 || neg == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
	return 0;
}
