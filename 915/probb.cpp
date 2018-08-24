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
    int n, pos, l, r;
    cin >> n >> pos >> l >> r;
    int steps = 0;
    if(pos < l){
        steps += l-pos;
        steps += 1;
        if(r!=n){
            steps += (r-l);
            steps+=1;
        }
    }

    else if(pos > r){
        steps+= pos-r+1;
        if(l!=1){
            steps+= (r-l);
            steps+=1;
        }
    }

    else{
        int diff = pos - l;
        if(r-pos > diff){
            int flag = 0;
           if(l!=1){
            steps+= diff+1;
            flag = 1;
           }
           if(r!=n)
           {
               //if(flag == 1)
                steps+= diff;
            steps+=(r-pos)+1;
           }
          // cout << "steps" << steps << endl;
        }

        else{
            int flag = 0;
            if(r!=n)
            {
                steps += (r-pos)+1;
                flag = 1;
            }
            if(l!=1){
                //if(flag == 1)
                    steps+= r-pos;
                steps+=diff+1;
            }
        }
    }
    cout << steps << endl;
	return 0;
}
