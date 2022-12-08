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
        ll n, k;
        cin >> n >> k;
        llvec ar(n);
        lluomp mp;
        for (ll i{0}; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }

        ll count{0};
        for (ll i{0}; i < n; i++)
            if (ar[i] != i + 1 && mp[ar[i]] >= k)
                count++;

        cout << count << endl;
    }

    return 0;
}