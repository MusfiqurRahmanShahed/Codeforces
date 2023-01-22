#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(s=="yes" || s=="YES" || s=="YEs" || s=="YeS" || s=="yES" || s=="Yes" || s=="yEs" ||s=="yeS")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
