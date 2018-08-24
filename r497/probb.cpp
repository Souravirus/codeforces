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
    int n;
    cin >> n;
    int h[n], w[n];
    for(int i = 0; i < n; i++){
        cin >> h[i] >> w[i];
    }

    int prev;
    int flag = 0;
    for(int i = 0; i < n; i++){
        if( i == 0){
            prev = max(h[i], w[i]);
        }

        else{
            int curr = max(h[i], w[i]);
            if(curr > prev){
                curr = min(h[i], w[i]);
                if(curr > prev){
                    flag = 1; 
                    break;
                }

                else{
                    prev = curr;
                }
            }

            else{
                prev = curr;
            }
        }
    }

    if( flag){
        cout << "NO";
    }

    else{
        cout << "YES";
    }
	return 0;
}
