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
    int n;
    cin >> n;
    int spect = 3;
    int flag = 0;
    for(int i = 0; i < n; i++){
        int winner;
        cin >> winner;
        if(spect == 1){ 
            if(winner == 3){
                spect = 2;
            }
            else if(winner == 2){
                spect = 3;
            }

            else{
                flag = 1;
            }

        }

        else if(spect == 2){
            if(winner == 1){
                spect = 3;
            }
            else if(winner == 3){
                spect = 1;
            }

            else{
                flag = 1;
            }
        }
        else{
            if(winner == 1){
                spect = 2;
            }
            else if(winner == 2){
                spect = 1;
            }

            else{
                flag = 1;
            }
        }
    }

    if(flag == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
	return 0;
}
