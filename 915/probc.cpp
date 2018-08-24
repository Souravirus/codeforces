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
    string a, b;
    int arr[60];
    for(int i = 0; i < 60; i++){
        arr[i] = 0;
    }

    cin >> a >> b;
    for(int i = 0; i < a.length(); i++){
        arr[a[i]]++;
    }
    
    if(a.length() < b.length()){
        for(int i = '9'; i >= '0'; i--){
            for(int j = 0; j < arr[i]; j++){
                cout << i-48;
            }
        }
    }

    else{
        int flag = 0;
        int ans[a.length()];
        for(int i = 0; i < a.length(); i++){
            ans[i] = -1;
        }
        int i = 0;
        while(i < b.length()){
            if(arr[b[i]] > 0){
                arr[b[i]]--;
                ans[i] = b[i];
            }

            else{
                int flag = 0;
                for(int j = b[i]; j >= '0'; j--){
                    if(arr[j] > 0){
                        ans[i] = j;
                        arr[j] --;
                        flag = 1;
                        break;
                    }
                }
                if(flag == 1)
                    break;
                else{
                    dout << "hello" << endl;
                    for(int j = i-1; j>=0; j--){
                        dout << "hello in for loop" << endl;
                        int flagi = 0;
                        int digit = ans[j];
                        for(int k = b[j]-1; k >= '0'; k--){
                            if(arr[k] > 0){
                                ans[j] = k;
                                arr[k]--;
                                flagi = 1;
                                break;
                            }
                        }
                        arr[digit]++;
                        if(flagi == 0){
                            dout << "not breaking" << endl;
                            ans[j] = -1;
                        }

                        else{
                            dout << "breaking" << endl;
                            break;
                        }
                    }
                }
                break;
            }
            i++;
        }

        for(int i = 0; i < a.length(); i++){
            if(ans[i] == -1)
                break;
            else
                cout << ans[i]-48 ;
        }
        for(int i = '9'; i >= '0'; i--){
            for(int j = 0; j < arr[i]; j++){
                cout << i-48;
            }
        }
    }
	return 0;
}
