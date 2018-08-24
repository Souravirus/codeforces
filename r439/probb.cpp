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

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin >> n;
    int a[n], b[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
    } 

    vector<int> va(a, a+n);
    vector<int> vb(b, b+n);
    dout << "showing vb" << endl;
    for(int i = 0; i < n; i++){
        dout << vb[i] << endl;
    }
    int count = 0;
    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end());
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int ans = a[i] ^ b[j];
            dout << "ans" << ans << endl;
            if(binary_search(va.begin(), va.end(), ans)){
                count++;
            }

            if(binary_search(vb.begin(), vb.end(), ans)){
                dout << "helllo" << endl;
                count++;
            }
        }
    }

    dout << "count" << count << endl;
    if(count % 2 == 0){
        cout << "Karen" << endl;
    }

    else{
        cout << "Koyomi" << endl;
    }

	return 0;
}
