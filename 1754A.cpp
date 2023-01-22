#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,Q=0,A=0;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='Q')
                Q++;
            else if(Q!=0)
                Q--;
        }
        if(Q==0)
            cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
