#include<bits/stdc++.h>
#define mp make_pair
#define FOR(i,n) for(int i=0;i<n;i++)
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define FORb(i, n) for(int i=n-1; i>=0; i--)
#define ll long long int
#define ulli unsigned long long int
#define dout if(debug)cout<<" "
using namespace std;

int debug = 0;

ulli mod = 998244353;

ulli f[5001];

ll pow(ll a, ll b, ll MOD)
{
 ll x=1,y=a; 
 while(b > 0)
 	{
 		if(b%2 == 1)
 	{
 		x=(x*y);
 		if(x>MOD) x%=MOD;
 	}
 	y = (y*y);
 	if(y>MOD) y%=MOD; 
 	b /= 2;
 	}
 return x;
}
 
/* Modular Multiplicative Inverse
 Using Euler's Theorem
 a^(phi(m)) = 1 (mod m)
 a^(-1) = a^(m-2) (mod m) */
ll InverseEuler(ll n, ll MOD)
{
 return pow(n,MOD-2,MOD);
}
 
ll C(ll n, ll r, ll MOD)
{
 
 return (f[n]*((InverseEuler(f[r], MOD) * InverseEuler(f[n-r], MOD)) % MOD)) % MOD;
}

ulli ans( ulli a, ulli b){
    ulli mini = min(a, b);
    ulli maxi = max(a, b);
    ulli ret = 0;
    for(ulli i = 0; i <= mini; i++){
        ulli perm = 1;
        for(ulli j = maxi; j > (maxi-i); j--){
            perm = (perm * j) % mod;
        }

        dout << "perm " << "for i= " << i << ":" << perm << endl;
        
        ulli combi = C(mini, i, mod);
        dout << "combi " <<  "for i= " << i << ":" << combi << endl;
        ret = (ret + (perm*combi)%mod) % mod;
    }

    return ret;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ulli a, b, c;
    f[0] = 1;
    for(ulli i = 1; i <= 5000; i++){
		f[i] = (f[i-1]*i) % mod;
    }

    cin >> a >> b >> c;

    dout << "Printing ansa" << endl;
    ulli ansa = ans(a, b);
    dout << "Printing ansb" << endl;
    ulli ansb = ans (b, c);
    dout << "Printing ansc" << endl;
    ulli ansc = ans (c, a);
    
    ulli final = (ansa*ansb % mod)*ansc % mod;
    cout << final << endl;
	return 0;
}
