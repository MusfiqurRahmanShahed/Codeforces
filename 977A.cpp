#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,k;
    cin >> n >> k;
    while(k>0)
    {
        if(n%10!=0)
        {
            k--;
            n--;
        }
        else
        {
            n/=10;
            k--;
        }
    }
    cout << n << endl;

    return 0;
}
