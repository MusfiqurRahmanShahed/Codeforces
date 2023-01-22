#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
#define int long long int
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i <= (n); i++)
#define rrep(i, n) for (int i = (n)-1; i >= 0; i--)
#define rrep1(i, n) for (int i = (n); i > 0; i--)
#define all_bit(x) __builtin_popcount(x)
#define endl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
vll v(1001,0);
void ran()
{
    ll x=1,n=1000;
    rep1(i,n)
    {
        if(i>2)
        {
            while(x%3==0 || x%10==3)
                x++;
            v[i]=x;
            x++;
        }
        else
        {
            v[i]=x;
            x++;
        }
    }
}
signed main()
{
    FAST;
    ll t,p;
    cin >> t;
    ran();
    while(t--)
    {
        cin >> p;
        cout << v[p] << endl;
    }
    return 0;
}
