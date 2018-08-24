#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define mem(a, b) memset(a, (b), sizeof(a))
#define clr(a) memset(a, 0, sizeof(a))
#define sq(x) ((x) *(x))
using namespace std;


int main() {
    int n,k; cin >> n; cin >> k; int a[n]; int min=k;
    for(int i=0; i<n; i++) {
       cin >> a[i]; if((k/a[i]) < min && k%a[i]==0) min = k/a[i];
    } 
    cout << min;
    return 0;
}


