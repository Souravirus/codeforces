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
struct line{
    int size;
    int begin;
    int end;
};

bool segment_sorter(line lhs, line rhs){
    if(lhs.size != rhs.size){
        return lhs.size > rhs.size;
    }
    if(lhs.begin != rhs.begin){
        return lhs.begin > rhs.begin;
    }

    if(lhs.end !=  rhs.end){
        return lhs.end > rhs.end;
    }
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin >> n;
    int arr_size = (n*(n+1))/2;
   // dout << arr_size << endl;
    vector<line> segments;
    int count = 0;
    for(int i = 0; i <= n; i++){
        for(int j = i+1; j <= n; j++){
            segments.push_back(line());
            segments[count].begin = i;
            segments[count].end = j;
            segments[count].size = j-i;
            count++;
        }
    }


    sort(segments.begin(), segments.end(), &segment_sorter);

    for(int i = 0; i < count; i++){
        dout << "i:" << i << endl;
        dout << segments[i].begin << endl;
        dout << segments[i].end << endl;
        dout << segments[i].size << endl;
    }

    int arr[count]={0};
    int finalCount = 0;

    for(int i = 0; i < count; i++){
        if(arr[i] == 0){
            for(int j = 0; j < count; j++){
                dout << "for i:" << i << " for j:" << j << endl;
                if(segments[j].begin <= segments[i].begin && segments[j].end <= segments[i].begin && arr[j] == 0){
                    segments[i].begin = segments[j].begin;
                    arr[j]++;
                    dout << "matched in begin" << endl;
                }
                if(segments[j].end >= segments[i].end && segments[j].begin >= segments[i].end && arr[j] == 0){
                    segments[i].end = segments[j].end;
                    arr[j]++;
                    dout << "matched in end" << endl;
                }
            }
            arr[i]++;
            finalCount++;
        }
    }

    cout << finalCount << endl;

	return 0;
}
