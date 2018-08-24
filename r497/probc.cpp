#include<bits/stdc++.h>
#define mp make_pair
#define lli long long int
#define ulli unsigned long long int
#define dout if(debug)cout<<" "
#define mod 1000000007
using namespace std;

int debug = 0;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n);

    int totCount = 0;
    int simCount = 0;
    int numCount = 0;
    int replace = 0;
    for(int i = 0; i < n; i++){ 
        if(i == 0){
            numCount++;
        }
        if(i!= 0){
            if(a[i] > a[i-1]){
               dout << "in case of " << a[i] << endl;
               dout << "simCount:" << simCount << " numCount:" << numCount << endl;
               totCount += min(simCount, numCount); 
               dout << "totCount: " << totCount << endl;
               if(numCount > simCount)
                   simCount = numCount;
               numCount = 0;
            }
            
            numCount++;

            if(i == n-1){
               dout << "in case of " << a[i] << endl;
               dout << "simCount:" << simCount << " numCount:" << numCount << endl;
               totCount += min(simCount, numCount); 
               dout << "totCount: " << totCount << endl;
               if(numCount > simCount)
                   simCount = numCount;
               numCount = 0;
                
            }
        }
    }

    cout << totCount << endl;
	return 0;
}
