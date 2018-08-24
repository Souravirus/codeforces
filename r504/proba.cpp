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
int debug = 0;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, m;
    string s, t;
    cin >> n >> m;
    cin >> s >> t;
    int i = 0, j = 0, flag = 0;

    int star = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '*'){
            star = 1;
        }
    }

    if(star == 0){
        if(s.length() == t.length()){
            int flag = 0;
            for(int i = 0; i < s.length(); i++){
                if(s[i] != t[i]){
                    flag = 1;
                    break;
                }
            }

            if(flag == 0){
                cout << "YES";
            }

            else{
                cout << "NO";
            }
        }

        else{
            cout << "NO" << endl;
        }
    }
    
    if(star == 1){
        while(i < s.length() && j < t.length()){
            if(s[i] == '*'){ 
               i++;
               flag = 0;
               break;
            }
            
            if(s[i] != t[j]){
                flag = 1;
                break;
            }

            i++;
            j++;

        }

        if(flag == 0){
            if(s[i] == '*' && i+1 < s.length()){
                flag = 1;
            }

            else if(s[i] == '*'){
                cout << "YES";
                return 0;
            }

            if(s.length() - i > t.length() - j){
                flag = 1;
            }
        }

        dout << "i: " << i << " j: " << j << endl;

        if(flag != 1){    
            int spe = 1;
            int k = s.length() -1;
            int l = t.length() -1;
            while( k >= i){
                if(s[k] != t[l]){
                    spe = 0;
                    break;
                }
                k--; l--;
            }

            if(spe == 0){
                cout << "NO" << endl;
            }

            else{
                cout << "YES" << endl;
            }
        }

        else{
            cout << "NO" << endl;
        }
    }

	return 0;
}
