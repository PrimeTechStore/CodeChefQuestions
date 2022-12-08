#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<ll> llvec;
typedef unordered_map<ll, ll> lluomp;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        lluomp mp;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
        }
        ll sum = 0;
        for (auto &i : mp)
            sum += ((i.second) * (i.second - 1)) / 2;

        cout << sum << endl;
    }

    return 0;
}