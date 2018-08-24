#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define dout if(debug)cout<<" "
int debug=0;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    lli a, b, f, k;
    scanf("%lld", &a);
    scanf("%lld", &b);
    scanf("%lld", &f);
    scanf("%lld", &k);
    lli currfuel=b;
    lli count=0;
    lli flag=0;
    for(lli i=0; i<k; i++)
    {
        if(i&1==1)
        {
            
             if(2*f>currfuel && i!=k-1)
            {
                count++;
                currfuel=b-(2*f);
                dout<<"in if %1 condition  currfuel "<<currfuel<<endl;
                if(currfuel<0)
                {
                    flag=1;
                    break;
                }
            }
            else if(f>currfuel)
            {
                dout<<"here f "<<f<<"currfuel "<<currfuel<<endl;
                count++;
                currfuel=b-f;
                dout<<"in if  last %1 condition  currfuel "<<currfuel<<endl;
                if(currfuel<0)
                {
                    flag=1;
                    break;
                }
            }
            else
            {
                currfuel=currfuel-(2*f);
                    dout<<"in else condition %1 currfuel "<<currfuel<<endl;
            }
        }
        else
        {
        	if(i==0)
            {
                if(currfuel<f)
                {
                    flag=1;
                    break;
                }
                if(2*(a-f)>currfuel-f && i!=k-1 )
                {
                    count++;
                    currfuel=b-(2*(a-f));
                    if(currfuel<0)
                    {
                        flag=1;
                        break;
                    }
                }
                else if((a-f)>currfuel-f)
                {
                    count++;
                    currfuel=b-(a-f);
                    dout<<"in if condition 0  currfuel "<<currfuel<<endl;
                    if(currfuel<0)
                    {
                        flag=1;
                        break;
                    }
                }
                else
                {
                    currfuel=currfuel-f-(2*(a-f));
                    dout<<"in else condition of 0 currfuel "<<currfuel<<endl;
                }
            }
            else
            {
                if(2*(a-f)>currfuel && i!=k-1)
                {
                    count++;
                    currfuel=b-(2*(a-f));
                    dout<<"in if condition of any other currfuel "<<currfuel<<endl;
                    if(currfuel<0)
                    {
                        flag=1;
                        break;
                    }
                }
                else if((a-f)>currfuel)
                {
                    count++;
                    currfuel=b-(a-f);
                    dout<<"in if condition of last currfuel "<<currfuel<<endl;
                    if(currfuel<0)
                    {
                        flag=1;
                        break;
                    }
                }
                else
                {
                    currfuel=currfuel-(2*(a-f));
                    dout<<"in else condition of any other currfuel "<<currfuel<<endl;
                }
            }
           
    	}
   	}
    if(flag==0)
        printf("%lld\n", count);
    else
    
        printf("-1\n");
	return 0;
}
