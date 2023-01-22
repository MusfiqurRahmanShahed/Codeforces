#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v,v1;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            if(i!=n)
                v1.push_back(x);
        }
        int last=v[v.size()-1];
        sort(v.begin(),v.end);
        v.erase(unique(v.begin(),v.end()),v.end());
        for(int i=0; i<v.size(); i++)
        {
            cout << v[i] << endl;
        }
    }
}
