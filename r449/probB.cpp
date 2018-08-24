#include<bits/stdc++.h>
#define mp make_pair
#define FOR(i,n) for(int i=0;i<n;i++)
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define FORb(i, n) for(int i=n-1; i>=0; i--)
#define lli long long int
#define ulli unsigned long long int
#define dout if(debug)cout<<" "
using namespace std;

int debug = 0;

lli strtoint(string s){
    lli num = 0;
    lli len = s.length();
    for(int i = 0; i < s.length(); i++){
        num += (s[i] - 48) * pow(10, ((len-1) - i));
    }
    dout << num << endl;
    return num;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    lli k, p;
    cin >> k >> p;
    lli arr[100001];
    lli sum = 0;
    string s;
    for(int i = 1; i <= 100000; i++){     
        s = "";
        s = std::to_string(i);
        string temp = s;
        for(int j = s.length()-1; j >= 0; j--){
            temp += s[j];
        }

        lli num = strtoint(temp);
        arr[i] = sum+num;
        sum = sum+ num;
    }
    
    lli ans = arr[k] % p; 
    cout << ans << endl;
	return 0;
}
