#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n = 0, k = 0, min = INT_MAX, max = INT_MIN;
        cin >> n >> k;
        for (ll i = 0; i < n; i++)
        {
            ll x = 0;
            cin >> x;
            if (min > x)
                min = x;
            if (max < x)
                max = x;
        }

        if (max + min <= k)
            cout << "Yes";
        else
            cout << "No";

        cout << endl;
    }

    return 0;
}