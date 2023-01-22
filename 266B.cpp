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
#define rep(i, n) for (int i = 0; i < (n); i++)
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
    ll n,t;
    cin >> n >> t;
    string s;
    cin >> s;
    for(int i=0;i<t; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(s[j]=='B' && s[j+1]=='G'){
                swap(s[j],s[j+1]);

            j++;}
        }
    }
    cout << s << endl;
}
int main()
{
    FAST;
    solve();
}



