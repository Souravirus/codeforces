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

bool sortinrev(const pair<int,int> &a, 
               const pair<int,int> &b)
{
       return (a.first > b.first);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    vector<pair<int, char> > vect;
    for(int i = 0; i < 4; i++){
        dout << "he" << endl;
        int num;
        cin >> num;
        vect.push_back( mp(num, 'A' + i));
    }

    dout << "hello";

    char ans[2][1000];
    sort(vect.begin(), vect.end(), sortinrev);

    for(int i = 0; i < 4; i++){
        dout << vect[i].first<< endl;
        dout << vect[i].second << endl;
    }

    int flag = 0;
    int count = 0;
    for(int i = 0; i < vect[1].first; i++){
        if(i % 2 == 0){
            ans[0][i] = vect[0].second;
            ans[1][i] = vect[1].second;
        }

        else{
            ans[0][i] = vect[1].second;
            ans[1][i] = vect[0].second;

        }
        count++;
    }

    for(int k = 0; k < 2; k++){
        int pat = 0;

        vect[0].first = vect[0].first - vect[1].first;
        vect[1].first = 0;
        sort(vect.begin(), vect.end(), sortinrev);
        int end = vect[1].first;

        if(k == 1){
            end = vect[1].first - 1;
        }

        
        if(vect[1].second == ans[0][count-1]){
            

            for(int i = 0; i < end; i++){

                if(pat % 2 == 0){
                    ans[0][count] = vect[0].second;
                    ans[1][count] = vect[1].second;
                }

                else{
                    ans[0][count] = vect[1].second;
                    ans[1][count] = vect[0].second;
                }
                pat++;
                count++;
            }
        }

        else{

            for(int i = 0; i < end; i++){

                if(pat % 2 == 0){
                    ans[0][count] = vect[1].second;
                    ans[1][count] = vect[0].second;
                }

                else{
                    ans[0][count] = vect[0].second;
                    ans[1][count] = vect[1].second;
                }
                pat++;
                count++;
            }
        }

    }

    if(vect[1].first != 0){
        vect[0].first -= vect[1].first - 1;
        int pat = 0;

        for(int i = 0; i < 2 * vect[0].first; i++){
            if(pat % 2 == 0){
                ans[0][count] = vect[1].second;
                ans[1][count] = vect[1].second;
            }

            else{
                ans[0][count] = vect[0].second; 
                ans[1][count] = vect[1].second;
            }

            pat++;
            count++;
        }
    }

    else{
        ans[0][count] = vect[0].second;
        ans[1][count] = vect[0].second;
        count ++;
    }


    cout << "2 " << count << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < count; j++){
            cout << ans[i][j];
        }
        cout << endl;
    }


	return 0;
}
