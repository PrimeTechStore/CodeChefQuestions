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
        vector<ll> a(n);
        vector<ll> b(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++)
            cin >> b[i];

        ll diffa = 0, diffb = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] > b[i])
                diffa += a[i] - b[i];
            else
                diffb += b[i] - a[i];
        }

        if (diffa == diffb)
            cout << diffa << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}