#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 1)
            cout << 0 << endl;
        else if (n%2)
            cout << 2 * ((n+1)/2) * (n/2);
        else
            cout << 2 * (n/2) * (n/2);
    }

    return 0;
}