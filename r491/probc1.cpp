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

lli binSearch(lli n, lli min, lli max, lli last){ 
    lli mid = (max + min) / 2;
    dout << mid << endl;
    dout << "max: " << max << endl;
    dout << "min: " << min << endl;

    if(max < min){
        return last;
    }
    
    lli total = n;
    lli sum = 0;
    while ( total != 0){
        if(total > mid){
            total -= mid;
            sum += mid;
        }

        else{
            sum += total;
            total = 0;
        }

        total -= total/10;

    }

    dout << "sum: " << sum << endl;


    if(sum * 2 >= n){
        last = mid;
        return binSearch( n, min, mid - 1, last);  
    }

    else{

        return binSearch(n, mid + 1, max, last); 
    }
    
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    lli n;
    cin >> n;

    lli mid = 17/ 2; 
    //dout << "mid: " << mid << endl;

    lli ans = 0;

     ans = binSearch(n, 1, n, -1);
    cout << ans;
	return 0;
}
