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
    double arr[n];
    double sum = 0;
    for(int i = 0; i< n; i++){
        cin >> arr[i];
        sum += arr[i];

    }

    sort(arr, arr+n);
    
    double avg = sum / n;
    int count = 0;
    
    for(int i = 0; i < n; i++){
        if(avg >= 4.5){
            break;
        }

        sum += 5 - arr[i];
        avg = sum / n;
        dout << "avg " << avg << endl; 
        count ++;
    }

    cout << count;
	return 0;
}
