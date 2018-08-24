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

struct ele{
    int srno;
    int rem;
    int num; 
};

bool comp(ele a, ele b){
	return a.rem < b.rem;
}

bool comp2(ele a, ele b){
   	return a.srno < b.srno;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int opt = n/m;
    //cout << opt << endl;

    int remain[m] = {0};

    ele arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i].num;
        arr[i].srno = i;
        arr[i].rem = arr[i].num % m;
        remain[arr[i].rem]++;
    }

    /*for(int i = 0; i < m; i++){
        cout << remain[i] << " ";
    }*/

    sort(arr, arr + n, comp);

    lli count = 0;
    int ind = 0;
    int inc[n] = {0};

    for(int i = 0; i < m; i++){
        dout << "ind: " << ind << endl;
        if(remain[i] > opt){
            int sub = remain[i] - opt;

            inc[ind + remain[i]] --;

            inc[ind + remain[i] - sub]++;

            count += sub;

            ind = ind + remain[i] - sub;

            remain[(i+1)%m]+= sub;
            remain[i] = opt;
        }

        else{
            ind += remain[i];
        }
    }

    int increment = 0;

    for(int i = 0; i < n; i++){
        increment += inc[i];
        arr[i].num += increment;
    }

    memset(inc, 0, sizeof(inc)); 
    int indstart = ind;

    for(int i = 0; i < m; i++){
        dout << "ind: " << ind << endl;
        dout << "remain[i]: " << remain[i] << endl;
        if(remain[i] > opt){
            //cout << "hello";
            int sub = remain[i] - opt;

            count += sub;

            inc[(ind + remain[i]) % n] --;
            inc[(ind + remain[i] - sub) % n]++;

            ind = ind + remain[i] - sub;

            remain[(i+1)%m]+= sub;
            remain[i] = opt;
        }

        else{
            ind += remain[i];
        }
    }

    increment = 0;

    for(int i = indstart; i < ind; i++){
        increment += inc[i%n];
        arr[i%n].num += increment;
    }

    dout << ind << endl;

    sort(arr, arr+n, comp2);
    cout << count << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i].num << " ";
    }
	return 0;
}
