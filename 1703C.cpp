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
        vector<ll>v;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin >> a;
            v.push_back(a);
        }
        for(ll i=0; i<n; i++)
        {
            ll p;
            cin >> p;
            string s;
            cin >> s;
            for(ll j=0; j<p; j++)
            {
                if(s[j]=='D')
                {
                    if(v[i]==9)
                        v[i]=0;
                    else
                        v[i]++;
                }
                else
                {
                    if(v[i]==0)
                    v[i]=9;
                    else
                        v[i]--;

                }
            }
        }
        for(ll i=0; i<n; i++)
            cout << v[i] << " ";

        cout << endl;
    }
    return 0;
}

