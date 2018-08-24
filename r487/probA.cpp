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
    string land;
    cin >> land;
    int flag = 0;
    for(int i = 0; i < land.length(); i++)
    {
        if(land[i] == 'A'){
            if( land[i+1] == 'B') {
                if( land[i + 2] == 'C'){
                    cout << "Yes";
                    flag = 1;
                    break;
                }
            }

            else if( land[i+1] == 'C') {
                if( land[i + 2] == 'B'){
                    cout << "Yes";
                    flag = 1;
                    break;
                }
            }
        }
        else if(land[i] == 'B'){
            if( land[i+1] == 'C') {
                if( land[i + 2] == 'A'){
                    cout << "Yes";
                    flag = 1;
                    break;
                }
            }

            else if( land[i+1] == 'A') {
                if( land[i + 2] == 'C'){
                    cout << "Yes";
                    flag = 1;
                    break;
                }
            }
        }
        else if(land[i] == 'C'){
            if( land[i+1] == 'B') {
                if( land[i + 2] == 'A'){
                    cout << "Yes";
                    flag = 1;
                    break;
                }
            }

            else if( land[i+1] == 'A') {
                if( land[i + 2] == 'B'){
                    cout << "Yes";
                    flag = 1;
                    break;
                }
            }
        }
    }

    if(flag == 0){
        cout << "No";
    }
	return 0;
}
