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

struct sub{
    int diff;
    int ind;
};

struct group{
    int start;
    int end;
};

bool func(sub a, sub b){
    return a.diff < b.diff;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, B;
    cin >> n >> B;
    int arr[n];
    int odd[n] = {0}, even[n] = {0}, evencount = 0, oddcount = 0;
    sub differ[n];

    group g[100];
    int rep[n] = {0};

    g[1].start = 0;
    g[1].end = n-1;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(i != 0){
            differ[i].diff = abs(arr[i] - arr[i-1]);
            differ[i].ind = i;
        }

        if(arr[i] % 2 == 0){
            evencount++;
        }

        else{
            oddcount++;
        }

        rep[i] = 1;

        even[i]= evencount;
        odd[i]= oddcount;
    }

    sort(differ + 1, differ+n, func);
    int ans = 0;

    int gcount = 1, evenstart, evenend, oddstart, oddend;
    int bcount = 0;
    int flag = 1;
    while(flag == 1){

        flag = 0;
        for(int i = 1; i < n; i++){
            int r1 = rep[differ[i].ind];
            int in1 = differ[i].ind - 1;
            int in2 = differ[i].ind;
            dout << "in1: " << in1 << " in2: " << in2 << endl;
            if(rep[differ[i].ind] == rep[differ[i].ind-1]){
               int st = g[r1].start;
               int en = g[r1].end;
               if(st!= 0){
                   evenstart = even[in1]-even[st-1];
                   oddstart = odd[in1] - odd[st-1];
               }

               else{
                   evenstart = even[in1];
                   oddstart = odd[in1];
               }
               evenend = even[en] -even[in1];
               oddend = odd[en] - odd[in1];

               dout << "printing evens: " << endl;
               dout << evenstart << " " << oddstart << " " <<  evenend << " " << oddend << endl;

               if(evenstart == oddstart && evenend == oddend){
                    bcount += differ[i].diff;
                    if(bcount > B)
                    break;
                    flag = 1;
                    dout << "breaking at: " << in2;
                    ans++;
                    g[gcount+1].start = st;
                    g[gcount+1].end = in1;
                    g[gcount+2].start = in2;
                    g[gcount+2].end = en;
                    for(int j = st; j <= in1; j++){
                        rep[j] = gcount+1;
                    }

                    for(int j = in2; j <= en; j++){
                        rep[j] = gcount+ 2;
                    }

                    gcount += 2;
               }
            }
        }
    }

    cout << ans << endl;

	return 0;
}
