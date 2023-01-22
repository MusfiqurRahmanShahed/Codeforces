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
#define rep(i, n) for (int i = 1; i < (n); i++)
#define rep1(i, n) for (int i = 1; i <= (n); i++)
#define rrep(i, n) for (int i = (n)-1; i >= 0; i--)
#define rrep1(i, n) for (int i = (n); i > 0; i--)
#define all_bit(x) __builtin_popcount(x)
#define endl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
const int N=100;

void SOLVE()
{
    string s;
    cin>> s;
    int flag=0;
    if(s[0]=='Y')
        flag=1;
    else if(s[0]=='e')
        flag=2;
    else if(s[0]=='s')
        flag=3;

    if(flag)
    {
        rep(i,s.size())
        {
            if(s[i]=='Y')
                if(flag==3)
                    flag=1;
                else
                {
                    flag=0;
                    break;
                }
            else if(s[i]=='e')
                if(flag==1)
                    flag=2;
                else
                {
                    flag=0;
                    break;
                }
            else if(s[i]=='s')
                if(flag==2)
                    flag=3;
                else
                {
                    flag=0;
                    break;
                }
            else
            {
                flag=0;
                break;
            }
        }
    }
    if(flag)
        cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    FAST;
    int t;
    cin >> t;
    while(t--)
        SOLVE();

        return o;
}

