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
    int a[5]={0};
    cin >> n;
    for(int i = 0; i < 3; i++){
        cin >> a[i]; 
    }

    int chngpos0, chngpos1, chngpos2;
    int pos = 0, dist0, dist1, dist2;

    if(a[1] < a[0]){
        dist0 = a[1]; 
        chngpos0 = 2;
    }

    else{
        dist0 = a[0];
        chngpos0 = 1;
    }

    if(a[0] < a[2]){
        dist1 = a[0];
        chngpos1 = 0;
    }

    else{
        dist1= a[2];
        chngpos1 = 2;
    }

    if(a[1] < a[2]){
        dist2 = a[1];
        chngpos2 = 0;
    }

    else{
        dist2 = a[2];
        chngpos2 = 1;
    }

    int dist = 0;
    if(n == 1)
        cout << "0" << endl;
    else{
        for(int i = 1; i < n; i++){
            if(pos == 0){
                pos = chngpos0;
                dist+= dist0;
            }
            else if(pos == 1){
                pos = chngpos1;
                dist+= dist1;
            }
            else{
                pos = chngpos2;
                dist += dist2;
            }
        }
        cout << dist << endl;
    }
	return 0;
}
