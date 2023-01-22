#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ull = unsigned long long;
using pr = pair<ll, ll>;
using vi = vector<ll>;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define srt(v) sort(all(v))
#define srtg(v) sort((v).begin(),(v).end(),greater<int>())
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
const int   N                               = (int) 1e6+5;
const int   M                               = (int) 1e9+5;
const int   mod                             = (int) 1000000007;
const int   max_prime                       = (int) 1e6+3;
int main()
{
    FAST;
    ll t;
    cin >> t;
    vi v(t);
    rep(i,t)
    cin >> v[i];

    ll sum=0,best=0;

    rep(i,t)
    {
        sum=max(v[i],sum+v[i]);
        best=max(best,sum);
    }
    cout << best << endl;
}
/*
8
-1 3 -2 5 3 -5 2 2

*/
