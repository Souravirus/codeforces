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
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    int arr[200] = {0};
    for(int i = 0; i < str.length(); i++){
        arr[str[i]]++;
    }

    for(int i = 'a'; i <= 'z'; i++){
        dout << "i:" << i << " " << arr[i] << endl;
        if(k > 0){
            if(arr[i] <= k){
               k-=arr[i];
               for(int j = 0; j < str.length(); j++){
                   if(str[j] == i){
                       str[j] = '3';
                   }
               }
            }

            else{
                int count = 0;
                for(int j = 0; j < str.length(); j++){
                   if(i == str[j]){
                       dout << "i:" << i << " " << str[j] << endl;
                       str[j] = '4';
				       count++;
                   }
                   if(count == k){
                       k = 0;
                       break;
                   }
                }
            }
        }
    }

    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            cout << str[i];
        }
    }
	return 0;
}
