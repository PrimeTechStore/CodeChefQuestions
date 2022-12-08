#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a=0,b=0,p=0, q=0;

        cin>>a>>b>>p>>q;

        if (!(a % p) && !(b % q))
        {
            int res = a/p - b/q;
            if (res == 0 || res == 1 || res == -1)
            cout << "YES";
            else 
            cout << "NO";
        }
        else 
        cout << "NO";

        cout << endl; 
    }
    return 0;
}