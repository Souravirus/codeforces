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


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int i = 0;
    int count = 0;
    int counto = 0;
    int countc = 0;
    int flago = 0;
    string a = "";
    while(i < n){
       if(s[i] == '(' && flago != 1){
           a += '(';
           counto++;
       }

       else if(s[i] == ')'){
           if(counto > countc){
               a+=')';
               countc++;
           }
       }

       if(counto >= k/2 && countc >= k/2)
           break;
       if(counto == k/2)
           flago = 1;
       i++;
    }

    cout << a << endl;
	return 0;
}
