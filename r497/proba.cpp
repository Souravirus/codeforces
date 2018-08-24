#include<bits/stdc++.h>
#define mp make_pair
#define lli long long int
#define ulli unsigned long long int
#define dout if(debug)cout<<" "
#define mod 1000000007
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    string s;
    cin >> s;
    int flag = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'n'){
            if(i == s.length() -1){
                flag = 1;
            }

            else if(s[i+1] != 'a' && s[i+1] != 'e' && s[i+1] != 'i' && s[i+1] != 'o' && s[i+1] != 'u'){
                flag = 1;
            }
        }
    }

        if(flag == 1){
            cout << "NO";
        }

        else{
            cout << "YES";
        }
	return 0;
}
