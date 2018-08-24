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
    int m;
    cin >> m;
    int a[m];
    vector<pair<int, int> > b(m);
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }

    for(int i = 0; i < m; i++){
        cin >> b[i].first;
        b[i].second = i;
    }

    int al[m];
    sort(b.begin(), b.end());
    sort(a, a+m, greater<int>());


    for(int i = 0; i < m; i++){
       al[b[i].second] = a[i]; 
    }

    for(int i = 0; i < m; i++){
        cout << al[i] << " ";
    }
	return 0;
}
