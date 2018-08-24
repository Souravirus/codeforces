#include <bits/stdc++.h>
using namespace std;

vector<int> divi; 
// Function to print the divisors
void printDivisors(int n)
{
    // Note that this loop runs till square root
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                divi.push_back(i); 

            else {
               divi.push_back(i);
               divi.push_back(n/i);
            }
        }
    }
}
 
/* Driver program to test above function */
int main()
{
    int n;
    string str;
    cin >> n >> str;
    printDivisors(n);

    sort(divi.begin(), divi.end());
    
    for(int i = 0; i < divi.size(); i++){
        reverse(str.begin(), str.begin()+divi[i]);
    }

    cout << str << endl;
    return 0;
}
