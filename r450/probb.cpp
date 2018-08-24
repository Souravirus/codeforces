#include<bits/stdc++.h>
#define mymap gcmake_pair
#define FOR(i,n) for(int i=0;i<n;i++)
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define FORb(i, n) for(int i=n-1; i>=0; i--)
#define lli long long int
#define ulli unsigned long long int
#define dout if(debug)cout<<" "
using namespace std;
map <int, int> mymap;
string res;

void fracToDec(int numr, int denr)
{
     
    mymap.clear();
 
    int rem = numr%denr;
    int count = 0;
 
    while ( (rem!=0) && (mymap.find(rem) == mymap.end()) )
    {
	    mymap[rem] = res.length();
 
        rem = rem*10;
 
        int res_part = rem / denr;
        res += to_string(res_part);

        rem = rem % denr;
    }
    rem = rem*10;
    int res_part = rem/denr;
    res += to_string(res_part);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int numr, denr, num;
    cin >> numr >> denr >> num;
    fracToDec(numr, denr);
    int flag = 0;
    for(int i = 0; i < res.length(); i++){
        if(res[i] == num+'0'){
            flag = i+1;
            break;
        }
    }

    if(flag != 0)
        cout << flag;
    else
        cout << "-1";
	return 0;
}
