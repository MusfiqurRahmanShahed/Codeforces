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
    ll t,cnt=0;
    cin >> t;
    string s;
    while(t--){
        cin >> s;
        if(s=="Tetrahedron")cnt+=4;
        else if(s=="Cube")cnt+=6;
        else if(s=="Octahedron")cnt+=8;
        else if(s=="Dodecahedron")cnt+=12;
        else cnt+=20;
    }
    cout << cnt << endl;
}

