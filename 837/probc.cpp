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

int n, a, b;
int x[101], y[101];
int knapsack(){
    int act[n+1][a+1][b+1];
    int maxi[n+1][a+1][b+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= a; j++){
            for(int k = 0; k <= b; k++){
                if(i == 0 || j == 0 || k == 0){
                    maxi[i][j][k] = 0;
                }

                else if( x[i] <= j && y[i] <= k){
                    maxi[i][j][k] = max(maxi[i-1][j][k], x[i]*y[i]);
                }
                else if (x[i] <= k && y[i] <= j){
                    maxi[i][j][k] = max(maxi[i-1][j][k], x[i]*y[i]);
                }
                else{
                    maxi[i][j][k] = maxi[i-1][j][k];
                }

            }
        }
    }
    
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= a; j++){
            for(int k = 0; k <= b; k++){
                if(i == 0 || j == 0 || k == 0){
                    act[i][j][k] = 0;
                }

                else if( (x[i] <= j && y[i] <= k)){
                    if(x[i] >= y[i])
                    {
                        int moun = x[i] * y[i];
                        if(maxi[i-1][j][k-y[i]] != 0)
                            moun += maxi[i-1][j][k - y[i]];
                        else 
                            moun = 0;
                        act[i][j][k] = max(act[i-1][j][k], moun);
                    }
                    else{
                        int moun = x[i] * y[i];
                        if(maxi[i-1][j-x[i]][k] != 0)
                            moun += maxi[i-1][j-x[i]][k];
                        else
                            moun = 0;
                        act[i][j][k] = max(act[i-1][j][k], moun);
                    }
                }

                else if(x[i] <= k && y[i] <= j){
                    if(x[i] >= y[i])
                    {
                        int moun = x[i]*y[i];
                        if(maxi[i-1][j-y[i]][k] != 0)
                            moun += maxi[i-1][j-y[i]][k];
                        else 
                            moun = 0;
                        act[i][j][k] = max(act[i-1][j][k], moun);
                    }
                    else{
                        int moun = x[i]*y[i];
                        if(maxi[i-1][j][k-x[i]] != 0)
                            moun += maxi[i-1][j][k-x[i]];
                        else
                            moun = 0;
                        act[i][j][k] = max(act[i-1][j][k], moun);
                    }
                }
                else{
                    act[i][j][k] = act[i-1][j][k];
                }
            }
        }
    }

    /*for(int i = 0; i <= n; i++){
        for(int j = 0; j <= a; j++){
            for(int k = 0; k <= b; k++){
                if(j == 0 && k == 0){
                    dout << "\nprinting for i = " << i << endl;   
                }
                if(k == 0){
                    cout << endl;
                }
                dout << maxi[i][j][k]<< " ";
            }
        }
    }*/
    for(int i = 2; i <= n; i++){
        for(int j = 100; j <= a; j++){
            for(int k = 100; k <= b; k++){
                if(j == 0 && k == 0){
                    dout << "\nprinting for i = " << i << endl;   
                }
                if(k == 0){
                    dout << endl;
                }
                dout << act[i][j][k]<< " ";
            }
        }
    }

    return act[n][a][b];

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin >> n >> a >> b;
    for(int i = 1; i <= n; i++){
        cin >> x[i] >> y[i];
    }

    int ans = knapsack();
    cout << ans << endl;
	return 0;
}
