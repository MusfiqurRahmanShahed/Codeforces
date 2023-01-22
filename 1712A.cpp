#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,c=0;
        cin >> n >> k;
        vector<int>v1;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
        }
        for(int i=1; i<=k; i++)
        {
            int s=0;
            for(int j=0; j<k; j++)
            {
                if(i==v1[j])
                {
                    s=1;
                    break;
                }
            }
            if(s==0)
                c++;
        }
        cout << c << endl;
    }
    return 0;
}
