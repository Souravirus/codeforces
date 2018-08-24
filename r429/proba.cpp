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
    int n, k;
    cin >> n >> k;
    int a[256];
    memset (a, 0, sizeof(a));
    int flag = 0;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        a[c]++;
        if(a[c] > k){
            flag = 1;
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
