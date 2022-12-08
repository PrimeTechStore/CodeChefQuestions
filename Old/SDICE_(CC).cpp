#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll SDICE(ll n)
{
    ll ans = 0;
    if (n % 4 == 1)
        ans = 20;
    if (n % 4 == 2)
        ans = 36;
    if (n % 4 == 3)
        ans = 51;
    ll times = n / 4LL;
    ans += times * 44LL;

    if (times >= 1)
        ans += (4LL * (ll)(4 - n % 4));

    return ans;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        cout << SDICE(n) << endl;
    }

    return 0;
}