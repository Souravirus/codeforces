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
    int x, y;
    cin >> x >> y;
    if(x == y){
        cout << "=" << endl;
    }

    else if( x == 1){
        cout << "<" << endl;
    }

    else if(x == 2){
        if(y == 3){
            cout << "<" << endl;
        }

        else if( y == 4){
            cout << "=" << endl;
        }

        else{
            cout << ">" << endl;
        }
    }

    else if(y == 2){
        if(x == 3){
            cout << ">" << endl;
        }

        else if(x == 4){
            cout << "=" << endl;
        }

        else{
            cout << "<" << endl;
        }
    }

    else if( y == 1){
         cout << ">" << endl;
    }

    else if( x > y){
        cout << "<" << endl;
    }

    else if(x < y){
        cout << ">" << endl;
    }
	return 0;
}
