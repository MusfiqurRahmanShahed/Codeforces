#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int c=0;
        string s1,s2;
        cin>>s1>>s2;
        if(s1[0]!=s1[1] && s1[0]!=s2[0] && s1[0]!=s2[1])
            c++;

        if(s1[1]!=s2[0] && s1[1]!=s2[1])
            c++;

        if(s2[0]!=s2[1])
            c++;

        cout << c <<endl;
    }
    return 0;
}
