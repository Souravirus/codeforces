#include<bits/stdc++.h>
#define mp make_pair
#define lli long long int
#define ulli unsigned long long int
#define dout if(debug)cout<<" "
#define mod 1000000007
using namespace std;

int n, m;
int a[300001];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin >> n >> m;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<vector<int> > vectm(n);
    vector<vector<int> >vect1(n);
    vector<vector<int> > vect0(n);
    vector<pair<int, int> > con(m);
    int edgeCount[n];
    memset(edgeCount, 0, n);
    for(int i = 0; i < m; i++){
       int st, en;
       cin >> st >> en;
       con[i].first = st;
       con[i].second = en;
       if(arr[st] != -1){
           edgeCount[st]++;
           if(arr[en] == -1){
                vectm[st].push_back(i);
           }

           else if(arr[en] == 0){
               vect0[st].push_back(i);
           }

           else{
               vect1[st].push_back(i);
           }
       }

       if(arr[en] != -1){
           edgeCount[en]++;
           if(arr[st] == -1){
              vectm[en].push_back(i); 
           }

           else if(arr[st] == 0){
               vect0[en].push_back(i);
           }

           else{
               vect1[en].push_back(i);
           }
       }

    }

    int count = 0;
    vector<int> ans;
    for(int i = 0; i < n; i++){
        if(arr[i] == -1){
            continue; 
        }

        else if(edgeCount[i] % 2 != arr[i]){
            if( !vectm[i].empty()){
                ans.push_back(vectm[i][0]);
                count++;
            }
        }
    }

    if(n == 1){
        if(a[0] != -1){
            cout << "-1";
        }
    }

    else{
        for(int i = 0; i < ans.size(); i++){
            cout << count << endl;
            cout << ans[i] << " ";
        }
    }

	return 0;
}
