#include<bits/stdc++.h>
#define dout if(debug) cout<<" "

using namespace std;

int debug = 0;

typedef unsigned long long int ulli;
typedef unsigned int ui;
typedef pair<int,int> mp;
typedef vector<vector<int> > matrix;

const int mod = 1e9+7;

bool comp(int a,int b){
    return a > b;
}

vector<int> sn;
vector<int> sm;
int count_num[10];

int flag = 1;
void  construct(vector<int> &ans,int ind){//only call it when sure that now it dec order
    vector<int> ret;
    for(int i=0;i<10;i++){
        for(int j=0;j<count_num[i];j++)
            ret.push_back(i);
    }
    sort(ret.begin(),ret.end(),comp);

    for(int i=0;i<ret.size();i++)
        ans.push_back(ret[i]);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    cout<<endl;
    return ;
}

int nextnum(int maxx){
    for(int i=maxx;i>=0;i--){
        if(count_num[i])return i;
    }
    return -1;
}
void hell(int ind){
    vector<int> ans;
    int i=ind;
    while(i<sn.size() &&  count_num[sm[i]]){
        ans.push_back(sm[i]); 
        count_num[sm[i]]--;
        i++;
    }

    if(i==sn.size()){
        for(int i=0;i<ans.size();i++)
            cout<<ans[i];
        cout<<endl;
        return;
    }//done number is equal

    int next = nextnum(sm[i]);
    dout<<i<<" "<<next<<" sm[i] "<<sm[i]<<endl;
    if(next==-1){
        i--;
        count_num[ans[i]]++;//remove the last added
        dout<<"removed "<<ans[i]<<endl;

        while(nextnum(sm[i]-1)==-1){
            i--; 
            count_num[ans[i]]++;//remove the last added
            dout<<"removed "<<ans[i]<<endl;
        } 

        int next = nextnum(sm[i]-1);
        dout<<i<<" "<<next<<" sm[i] "<<sm[i]-1<<endl;

        vector<int> now;
        for(int j=0;j<i;j++){
            now.push_back(ans[j]);
        }

        count_num[next]--;//dal do whi wala acha hai
        now.push_back(next);//pushing as ith elem

        construct(now,i+1);
    }
    else{
        count_num[next]--;//daal do whi asha hai
        ans.push_back(next);//pushing ith elem
        construct(ans,i+1); 
    }

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string n;
    string m;
    cin>>n>>m;


    for(int i=0;i<n.size();i++)
        sn.push_back(n[i]-'0');
    for(int i=0;i<m.size();i++)
        sm.push_back(m[i]-'0');

    sort(sn.begin(),sn.end(),comp);

    if(m.size() > n.size()){
        for(int i=0;i<n.size();i++)
            cout<<sn[i];
        cout<<endl;
        return 0;
    }

    for(int i=0;i<n.size();i++)
        count_num[sn[i]]++;

    hell(0);

}
