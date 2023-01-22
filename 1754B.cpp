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
        for(int i=1; i<=n/2; i++)
        {
            if(n%2!=0)
                cout << (n/2)+i << " " << i << " ";
            else
            {
                if(i!=n/2)
                    cout << (n/2)+i << " " << i << " ";
                else
                    cout << (n/2)+i << " " << i;
            }
        }
        if(n%2!=0)
            cout << n;
        cout << endl;
    }
    return 0;
}

