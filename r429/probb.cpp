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
    lli n;
    cin >> n;
    int a[n];
    int sum = 0;
    int odd = -1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
        if(a[i] % 2 != 0){
            odd = a[i];
        }
    }
    
    if(sum % 2 != 0){
        cout << "First";
    }

    else{
        if(odd != -1){
            cout << "First";
        }

        else{
            cout << "Second";
        }
    }

	return 0;
}
