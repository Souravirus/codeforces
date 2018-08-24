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

double a[1001], b[1001], n;

double check(double w, double mid){

    dout << "w:" << w << endl;
    dout << "n:" << n << endl;
    double rem = w+mid;
    dout << "first rem: " << rem << endl;
    double div = rem / a[1];
    rem -= div;
    dout << "div" << div << endl;
    dout << "rem" << rem << endl;
    if(rem - w < 0)
        return -1;
    for(int i = 2; i <= n; i++){ 
        dout << "going into loop" << endl;
        div = rem / a[i];
        rem -= div;
        dout << "div" << div << endl;
        dout << "rem" << rem << endl;
        if(rem - w <= 0)
            return -1;
        div = rem / b[i];
        rem -= div;
        dout << "div" << div << endl;
        dout << "rem" << rem << endl;
        if(rem - w <= 0)
            return -1;
    }
    dout << "rem:" << rem << endl;
    div = rem / b[1];
    rem -= div;
    dout << "div" << div << endl;
    dout << "rem" << rem << endl;
    if(rem - w < 0)
        return -1;
    return 1;

}

double binSearch(double w, double start, double end, double last, double load){
    double two = 2;
    double mid = (start + end)/two;
    dout << mid << endl; 
    double ans = check(w, mid);
    dout << "ans: " << ans << endl;
    if(ans == -1){
       if(load > 1){
           return last;
       }

       else{
           return binSearch(w, mid, end, last, load+1);
       }

    }

    else{
        binSearch(w, start, mid, mid, 0);
    }
}

double binSearch2(double w, double start, double end, double last, double load){
    double two = 2;
    double mid = (start + end)/two;
    dout << mid << endl; 
    double ans = check(w, mid);
    dout << "ans: " << ans << endl;
    if(ans == -1){
       if(load > 2){
           return last;
       }

       else{
           return binSearch2(w, mid, end, last, load+1);
       }

    }

    else{
        binSearch2(w, start, mid, mid, 0);
    }
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    double w;
    cin >> n;
    cin >> w;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++){
        cin >> b[i];
    }

    double ans;
    if(n < 6){
        ans = binSearch2(w, 0, 10000000000, -1, 0);
    }
    else{
        ans = binSearch(w, 0, 10000000000, -1, 0);
    }

    cout << setprecision(9) <<fixed << ans << endl;
	return 0;
}
