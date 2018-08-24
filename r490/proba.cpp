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
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int countl = 0, countr = n, count = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] <= k){
            countl++;
            count++;
        }

        else{
            break;
        }
    }

    for(int i = n-1; i >= 0; i--){
        if(i > countl){
            if(arr[i] <= k){
                count++;
            }

            else{
                break;
            }
        }
    }

    cout << count << endl;
	return 0;
}
