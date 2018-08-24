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
    string s;
    cin >> s;
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i]== 'i' || s[i] == 'o' || s[i] == 'u'){
            count++;

        }

        if(s[i] >= '0' && s[i] <= '9'){
            if(s[i] % 2 != 0){
                count++;
            }
        }

    }
    cout << count << endl;
	return 0;
}
