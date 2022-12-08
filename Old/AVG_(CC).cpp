#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<ll> llvec;
typedef unordered_map<ll, ll> lluomp;

ll AVG(llvec ar, ll n, ll k, ll avg)
{
    ll ans;
    ll sum{0};
    for (ll i{0}; i < n; i++)
        sum += ar[i];

    avg = avg * (k + n);

    if (avg <= sum)
        return -1;

    if ((avg - sum) % k)
        return -1;

    ans = (avg - sum) / k;

    return ans;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, avg;
        cin >> n >> k >> avg;
        llvec ar(n);
        for (ll i{0}; i < n; i++)
            cin >> ar[i];

        cout << AVG(ar, n, k, avg) << endl;
    }

    return 0;
}