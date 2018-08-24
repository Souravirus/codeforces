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
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int grig[n], andr[n], countg = 0, counta = 0, cntg = 0, cnta = 0, flag = 0;

    if(n == 1){
        cout << "-1";
    }

    else if(n == 2){
        if(arr[0] == arr[1]){
            cout << "-1" << endl;
        }

        else{
            cout << "1" << endl;
            cout << "1" << endl;
        }
    }

    else{
        for(int i = 0; i < n; i++){
            if(countg == 0){
                grig[countg] = i;
                countg++;
                cntg += arr[i];
            }

            else if(counta == 0){
                cnta += arr[i];
                counta++;
            }

            else{
                flag = 1;
                if(cntg+arr[i] != cnta){
                    grig[countg] = i;
                    countg++;
                    cntg += arr[i];
                }

                else{
                    cnta += arr[i];
                }
            }

        }

        if(flag == 1){
            cout << countg << endl;
            for(int i = 0; i < countg; i++){
                cout << grig[i]+1 << " ";
            }
        }

        else{
            cout << "-1" << endl;
        }
    }

	return 0;
}
