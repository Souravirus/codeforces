
#include<bits/stdc++.h>
using namespace std;

int main(){
    char A,B;
    cin>>A>>B;
    int n,aa,bb;
    cin>>n;
    switch(A){
        case 118:
            aa=1;
            break;
        case 60:
            aa=2;
            break;
        case 94:
            aa=3;
            break;
        case 62:
            aa=4;
            break;
    }
    switch(B){
        case 118:
            bb=1;
            break;
        case 60:
            bb=2;
            break;
        case 94:
            bb=3;
            break;
        case 62:
            bb=4;
            break;
    }
    n = n%4;
    string ans="undefined\n";
//    cout<<aa<<" "<<bb<<endl;
    if(n==1){
        if(bb-aa == 1 || bb==1 && aa==4) ans = "cw\n";
        else if (aa-bb==1 || bb==4 && aa==1)ans = "ccw\n";
    }
    else if(n==3){
        if(bb-aa == 1 || bb==1 && aa==4) ans = "ccw\n";
        else if (aa-bb==1 || bb==4 && aa==1)ans = "cw\n";
    }
    cout<<ans;
}

