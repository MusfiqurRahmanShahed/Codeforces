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
#define rep1(i, n) for (int i = 0; i <= (n); i++)
#define rrep(i, n) for (int i = (n)-1; i >= 0; i--)
#define rrep1(i, n) for (int i = (n); i > 0; i--)
#define all_bit(x) __builtin_popcount(x)
#define endl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
void solve()
{
    int m,s,flag=0;
    cin >> m>> s;
    vi v;
    rep(i,m)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    sort(all(v));
    int me=v[m-1]-m;
    //cout <<me << endl;
    for(int i=1; ; i++)
    {

        if(binary_search(v.begin(),v.end(),i))
            continue;
        else
        {
            s-=i;
            if(me!=0)me--;
        }
        if(s==0)
        {
            flag=1;
            break;
        }
        //cout << s << endl;
        if(s<0)
        {
            break;
        }
    }
    if(flag)
    {
        if(me!=0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}
int main()
{
    FAST;
    int t;
    cin >> t;
    while(t--)
        solve();
}




