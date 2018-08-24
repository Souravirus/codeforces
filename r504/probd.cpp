#include<bits/stdc++.h>
#define mp make_pair
#define FOR(i,n) for(int i=0;i<n;i++)
#define REP(i, a, b) for(int i=a;i<=b;i++)
#define FORb(i, n) for(int i=n-1; i>=0; i--)
#define lli long long int
#define ulli unsigned long long int
#define dout if(debug)cout<<" "
#define mod 1000000007
using namespace std;

int debug = 0;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<pair<int, int> > arr(n);
    int b[n];
    for(int i = 0; i < n; i++){
        cin >> b[i]; 
        arr[i].first = b[i];
        arr[i].second = i;
    }


    sort(arr.begin(), arr.end());

    int flag = 1;

    set<int> myset;
    set<int> ::iterator its;
    int prev = -1;
    int start = 0;

    for(int i = 0; i < n; i++){
        dout << "arr[i]:" << arr[i].first << endl;
        /*if(!myset.empty()){
            dout << "current set:" << endl;
            for(its = myset.begin(); its!= myset.end(); its++){
                dout << *its << " ";
            }
            dout << endl;
        }*/
        if(arr[i].first == 0){
            continue;
        }

        else{
            if(prev == -1){
               prev = arr[i].first;
               start =  arr[i].second;
            }

            else if(arr[i].first != prev){
                if(!myset.empty()){
                    its = myset.lower_bound(start); 
                    dout << "currently checking:" << arr[i-1].first << endl;
                    dout << "found:" << *its << endl;
                    if(its != myset.end()){
                        if(*its < arr[i-1].second){
                            flag = 0;
                            break;
                        }
                    }
                }
                myset.insert(start);
                myset.insert(arr[i-1].second);
                start = arr[i].second;
                prev = arr[i].first;
            }

            if(i == n-1){
                if(!myset.empty()){
                    its = myset.lower_bound(start); 
                    dout << "currently checking:" << arr[i].first << endl;
                    dout << "found:" << *its << endl;
                    if(its != myset.end()){
                        if(*its < arr[i].second){
                            flag = 0;
                            break;
                        }
                    }
                }
            }
        }
    }

    if(arr[n-1].first != q){
        int check = 0;
        for(int i = 0; i< n; i++){
            if(b[i] != 0){
                check = 1;
                break;
            }
        }
        if(check == 0)
            flag = 1;
    }

    if(flag == 0){
        cout << "NO";
    }

    else{
        cout << "YES" << endl;
        if(b[0] == 0){
            int num = q;
            for(int i = 0; i < n; i++){
                if(b[i] != 0){
                    num = b[i];
                }
            }

            for (int i = 0; i < n; i++){
                if(b[i]!= 0){
                    break;
                }

                else{
                    b[i] = num;
                }
            }
        }

        for(int i = 0; i < n; i++){
            if(b[i] == 0){
                b[i] = b[i-1];
            }
        }

        for(int i = 0; i < n; i++){
            cout << b[i] << " ";
        }
    }

	return 0;
}
