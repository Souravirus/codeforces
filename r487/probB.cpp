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
    int n, p;
    cin >> n >> p;
    string tide;
    cin >> tide;
    char arr[p];

    memset (arr, '.', p);
    
    for(int i = 0; i < n; i++){
        int ind = i%p;
        if(arr[ind] == '.')
            arr[ind] = tide[i];
    }

    int flag = 0;
    for(int i = 0; i < n; i++){
        int ind = i % p;
        if(tide[i] == '.'){
            if(arr[ind] == '0'){
                tide[i] = '1';
                flag = 1;
            }

            else if(arr[ind] == '1'){
                tide[i] = '0';
                flag = 1;
            }

            else{
                arr[ind] = '0';
                tide[ind] = '0';
            }
        }
    }
    
    if(flag == 1)
        cout << tide;
    else
        cout << "No";
	return 0;
}
