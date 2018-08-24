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
    map<int, int> mp;
    map<int, int> :: iterator its;
    map<int,int> :: iterator itf;
    int side;

    for(int i = 0; i < n; i++){
        cin >> side;

        if(mp.find(side) == mp.end()){
            mp[side] = 1;
        }
        
        else{
            mp[side]+=1;
        }
    }
    
   /* for(its = mp.begin(); its!= mp.end(); its++){
        dout << its->first << " " << its->second << endl;
        //its->second+=1;
       // dout << its->first << " " << its->second << endl;
       // itf = its + 1;
      //  dout << its->first << " " << its->second << endl;
    }*/
    itf = mp.begin();
    itf++;
    for(its = mp.begin(); its!=mp.end(); its++){

        if(itf != mp.end()){
            if(its->second > itf->second){
                itf->second+=(its->second-itf->second);
            }
            itf++;
        }
    }
    
    its = mp.end();
    its--;
    cout << its->second << endl;
	return 0;
}
