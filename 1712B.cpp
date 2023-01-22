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
        if(n%2==0)
            for(int i=1; i<=n/2; i++)
            {
                cout << i*2 << " " << i*2 -1 << " ";
            }
        else
        {
            cout << 1 << " ";
            for(int i=1; i<=n/2; i++)
            {
                cout << i*2+1 << " " << i*2 << " ";
            }
        }
        cout << endl;
    }
}
