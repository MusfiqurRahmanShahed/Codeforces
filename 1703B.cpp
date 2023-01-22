#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<char>v;
        for(ll i=0; i<n; i++)
        {
            ll flag=0;
            for(ll j=0; j<v.size(); j++)
            {
                if(s[i]==v[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                v.push_back(s[i]);
        }
        cout << (n-v.size())+(v.size())*2 << endl;
    }
    return 0;
}

