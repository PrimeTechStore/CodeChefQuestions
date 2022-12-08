#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll w, x, y, z;
        cin >> w >> x >> y >> z;

        if (w == x || w == y || w == z || w == (x + y + z) || w == (x + y) || w == (x + z) || w == (y + z))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}