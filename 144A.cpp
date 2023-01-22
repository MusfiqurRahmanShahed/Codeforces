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

signed main()
{
    FAST;
    ll n,p;
    cin >> n;
    vi v(n+1);
    rep(i,n)
        cin >> v[i];
    int mx=v[0],mn=v[0],mxi=0,mni=0;
    rep(i,n)
    {
        if(v[i]<=mn)
            {
                mni=i;
                mn=v[i];
            }
        if(v[i]>mx)
            {
                mxi=i;
                mx=v[i];
            }
    }
    //cout << mni << " " << mxi << endl;
    if(mni<mxi)
        cout << mxi+(n-1-mni)-1 << endl;
    else cout << mxi+(n-1-mni ) << endl;
    return 0;
}

