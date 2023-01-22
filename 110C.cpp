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
#define rep(n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i <= (n); i++)
#define rrep(i, n) for (int i = (n)-1; i >= 0; i--)
#define rrep1(i, n) for (int i = (n); i > 0; i--)
#define all_bit(x) __builtin_popcount(x)
#define endl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
vi v(1000001,1);
void solve()
{
    int n,cnt4=0,cnt7=0;
    cin >> n;
    if(v[n]==1)
    {

        while(v[n-7]==1)
        {
            n-=7;
            cnt7++;
        }
        if(n!=0)
        {
            cnt4=(n/4);
            n/=4;
        }
        rep(cnt4)cout << 4;
        rep(cnt7)cout << 7;
        cout << endl;
    }
    else cout << "-1" << endl;
}
void ILucky()
{
    v[1]=0;
    v[2]=0;
    v[3]=0;
    v[5]=0;
    v[6]=0;
    v[9]=0;
    v[10]=0;
    v[13]=0;
    v[17]=0;
}
int main()
{
    FAST;
    ILucky();
    solve();
}

