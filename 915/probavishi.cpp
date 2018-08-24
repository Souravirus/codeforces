/*houdhary
			 email id vishal130.vk@gmail.com
			 at Sat Jan 13 18:35:11 IST 2018 
*/
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define ll long long 
#define ull  unsigned long long
#define mp make_pair
#define s(n)   scanf("%d",&n)
#define sc(n)  scanf("%c",&n)
#define sl(n)  scanf("%lld",&n)
#define sf(n)  scanf("%lf",&n)
#define ss(n)  scanf("%s",n)
#define p(n)   printf("%d",n)
#define pc(n)  printf("%c",n)
#define pl(n)  printf("%lld",n)
#define pf(n)  printf("%lf",n)
#define ps(n)  printf("%s",n)
#define pn printf("\n")
#define loopf(X,Y) for(int i=X;i<Y;i++)
#define loopb(X,Y) for(int i=X;i>Y;i--)
#define space printf(" ")
#define dout(X) if(X)
#define matrix(rowsize,colsize,type,name) vector<vector<(type)>> name((rowsize),vector<(type)>(colsize));
int main(){
        int max_divider=-1;
        int n,d;
        s(n),s(d);
        int temp;
        int ans;
        for(int i=1;i<=n;i++){
                s(temp);
                if(d%temp==0 && i>max_divider){
                        ans=d/temp;
                }
        }
        p(ans),pn;
		return 0;
}
