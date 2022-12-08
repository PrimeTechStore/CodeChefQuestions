#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll D = 0, d = 0, P = 0, Q = 0;
        cin >> D >> d >> P >> Q;
        ll n = D / d;
        ll ans = 0;
        ans = (D * P) + (((n * (n - 1)) / 2) * Q * d) + n * Q * (D % d);
        cout << ans << endl;
    }

    return 0;
}