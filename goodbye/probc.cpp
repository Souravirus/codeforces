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
    double n, r;
    scanf("%lf%lf", &n, &r);
    double arr[4000];
    double x[1000];
    for(int i = 0; i < 4000; i++){
        arr[i] = 0;
    }
    for(int i = 0; i < n; i++){
        scanf("%lf", &x[i]);
        double max = 0;
        for(int j = x[i]-(2*r); j <= x[i]+(2*r); j++){
            if(arr[j] == 0){
                double distance = r;
                if(distance > max)
                    max = r;
            }

            else{
                double xdiff = x[i] - j;
                double distance = arr[j]+sqrt((4*r*r)-(xdiff*xdiff));
                dout << "printing distance at j:" << j << "distance:"<< distance << endl;
                if(distance > max)
                    max = distance;
            }
            dout << "done" << endl;
        }
        dout << "max" << max << endl;
        int m = x[i];
        arr[m] = max;
        /*dout << "printing arr" << endl;
        for(int j = 0; j < 12; j++){
            dout << arr[j] << " ";
        }*/
        //dout << endl;
        printf("%lf ", arr[m]); 
    }
	return 0;
}
