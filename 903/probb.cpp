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
    int h1, h2, a1, a2, c1;
    cin >> h1 >> a1 >> c1;
    cin >> h2 >> a2;
    vector<int> steps;
    dout << h1 << h2 << endl;
    while(h2 > 0){
        if(h1-a2 <= 0 && h2-a1>0){
            h1+=c1;
            h1-=a2;
            steps.push_back(0);
        }
        else{
           h2-=a1; 
           if(h2!=0)
            h1-=a2;
           steps.push_back(1);
        }
        dout << "h1:" << h1 << " h2:" << h2 << endl;
    }
    cout << steps.size() << endl;
    for(int i = 0; i < steps.size(); i++){
        if(steps[i] == 0)
            cout << "HEAL" << endl;
        else
            cout << "STRIKE" << endl;
    }
	return 0;
}
