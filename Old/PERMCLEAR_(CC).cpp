#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<ll> llvec;
typedef unordered_map<ll, ll> lluomp;
typedef unordered_map<ll, bool> lbuomp;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        llvec arr(n);
        for (ll i{0}; i < n; i++)
            cin >> arr[i];

        ll m;
        cin >> m;
        lbuomp mp;
        for (ll i{0}; i < m; i++)
        {
            ll x;
            cin >> x;
            mp[x] = true;
        }

        for (ll i{0}; i < n; i++)
            if (mp[arr[i]] != true)
                cout << arr[i] << " ";

        cout << endl;
    }

    return 0;
}   