#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(n) for (int i = 1; i < (n); i++)
#define rep1(i, n) for (int i = 1; i <= (n); i++)
#define rrep(i, n) for (int i = (n)-1; i >= 0; i--)
#define rrep1(i, n) for (int i = (n); i > 0; i--)
#define all_bit(x) __builtin_popcount(x)
#define endl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    ll n,cnt=1,mx=0,one=0,zero=0;
    cin >> n;
    string s;
    cin >> s;
    if(s[0]=='0')
        zero++;
    else one++;
    rep(n)
    {
        if(s[i]=='0')
            zero++;
        else one++;
        if(s[i]==s[i-1])
        {
            cnt++;
        }
        else
        {
            if(mx<cnt)
            {
                mx=cnt;
            }
            cnt=1;
        }
    }
    if(mx<cnt)
        mx=cnt;
    ll res1=one*zero;
    ll res2=mx*mx;
    if(res1>res2)
        cout << res1 << endl;
    else cout << res2 << endl;
}

int main()
{
    FAST;
    int tt;
    tt = 1;
    cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}

