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
    int n, k, m;
    cin >> n >> k >> m;
    int arr[n];
    int max = 0;
    map<int, int> mymap;
    map<int, int>  ::iterator its;

    for(int i = 0; i <n; i++){
        cin >> arr[i]; 
        if(arr[i] > max)
            max = arr[i];
    }
    
    int prev = 0;
    sort(arr, arr+n);
    for(int i = 0; i < n; i++){
    
        if(i == 0){
            mymap.insert(mp(arr[i], 1));
            prev = arr[i];
        }

        else{
            if(arr[i]!=prev){
                prev = arr[i];
                mymap.insert(mp(arr[i], 1));
            }
            
            else{
                its =  mymap.find(arr[i]);
                its->second++;
            }
        }
    }

    dout << "printing mymap" << endl;

    for(its = mymap.begin(); its != mymap.end(); its++){
        dout << "for " << its->first << ":" << its->second;
    }
    dout << endl;
    

    int ind = -1;
    int flag = 0;
    for(int i = 0; i < m; i++){
        int count = 0;
        int j=i;
        while(j <= max){
            its = mymap.find(j);
            if(its!=mymap.end())
                count += its->second;
            if(count >= k){
                ind = i;
                flag = 1;
                break;
            }
            j+= m;
        } 

        if(flag == 1)
            break;

    }

    dout << "ind:" << ind << endl;
    
    if(ind == -1)
        cout << "No" << endl;

    else{
        cout <<"Yes" << endl;
        flag = 0;
        int count = 0;
        int i = ind;
        while(i<=max){
            if(flag == 1)
                break;
            its = mymap.find(i);
            if(its != mymap.end()){
                for(int j = 0; j < its->second; j++){
                    cout << i << " ";
                    count++;
                    if(count == k){
                        flag = 1;
                        break;
                    }
                }
            }
            i+=m;
        }
        cout << endl;
    }
	return 0;
}
