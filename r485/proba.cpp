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
    int n;
    int arr[6] = {0};
    cin >> n;
    string s;
    for(int i = 0; i < n; i++){
        cin >> s;
        if(s == "purple"){
            arr[0] = 1;
        }

        else if( s == "green"){
            arr[1] = 1;
        }

        else if( s == "blue"){
            arr[2] = 1;
        }

        else if( s == "orange"){
            arr[3] = 1;
        }

        else if( s == "red" ){
            arr[4] = 1;
        }

        else{
            arr[5] = 1;
        }
    }

    cout << 6 - n << endl;

    if(arr[0] == 0){
        cout << "Power" << endl;
    }

    if(arr[1] == 0){
        cout << "Time" << endl;
    }

    if(arr[2] == 0){
        cout << "Space" << endl;
    }

    if(arr[3] == 0){
        cout << "Soul" << endl;
    }

    if(arr[4] == 0){
        cout << "Reality" << endl;
    }

    if(arr[5] == 0){
        cout << "Mind" << endl;
    }
    
	return 0;
}
