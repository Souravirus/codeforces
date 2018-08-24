#include<bits/stdc++.h>
#define mp make_pair
#define FOR(i,n) for(int i=0;i<n;i++)
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define FORb(i, n) for(int i=n-1; i>=0; i--)
#define lli long long int
#define ulli unsigned long long int
#define dout if(debug)cout<<" "
using namespace std;

lli debug = 1;

struct ele{
    lli srno;
    lli rem;
    lli num; 
};

bool comp(ele a, ele b){
    return a.rem < b.rem;
}

bool comp2(ele a, ele b){
    if(a.rem != b.rem){
        return a.srno < b.srno;
    }
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    lli n, m;
    cin >> n >> m;
    lli opt = n/m;
    //cout << opt << endl;

    lli remain[m] = {0};

    ele arr[n];

    for(lli i = 0; i < n; i++){
        cin >> arr[i].num;
        arr[i].srno = i;
        arr[i].rem = arr[i].num % m;
        remain[arr[i].rem]++;
        //dout << i << " ";
    }

    //cout << "hello";
    /*for(lli i = 0; i < m; i++){
        cout << remain[i] << " ";
    }*/

    sort(arr, arr + n, comp);

    lli count = 0;
    lli ind = 0;
    lli inc[n] = {0};

    for(lli i = 0; i < m; i++){
        dout << "remain[i]: " << remain[i] << endl;
        if(remain[i] > opt){
            lli sub = remain[i] - opt;

            dout << "sub: " << sub << endl;

            inc[(ind + remain[i])%n] --;

            inc[(ind + remain[i] - sub)%n]++;

            count += sub;

            ind = ind + remain[i] - sub;

            dout << "ind: " << ind << endl;

            remain[(i+1)%m]+= sub;
            remain[i] = opt;
        }

        else{
            ind += remain[i];
            dout << "ind: " << ind << endl;
        }
    }

    for(lli i = 0; i < m; i++){
        dout << "remain2[i]: " << remain[i] << endl;
        if(remain[i] > opt){
            dout << "hello";
            lli sub = remain[i] - opt;


            inc[(ind + remain[i])%n] --;
            inc[(ind + remain[i] - sub)%n]++;

            ind = ind + remain[i] - sub;

            count += sub;

            dout << "ind: " << ind << endl;

            remain[(i+1)%m]+= sub;
            remain[i] = opt;
        }

        else{
            ind += remain[i];
        }
    }

    lli increment = 0;

    for(lli i = 0; i < n; i++){
        increment += inc[i];
        arr[i].num += increment;
    }


    sort(arr, arr+n, comp2);
    cout << count << endl;

    for(lli i = 0; i < n; i++){
        cout << arr[i].num << " ";
    }
	return 0;
}
