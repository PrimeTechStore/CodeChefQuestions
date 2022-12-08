#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<ll> llvec;
typedef unordered_map<ll, ll> lluomp;

ll MINSUBARRY(llvec a)
{
    return min(a[0] * a[a.size() - 1], min(a[0] * a[0], a[a.size() - 1] * a[a.size() - 1]));
}

ll MAXSUBARRY(llvec a)
{
    return max(a[a.size() - 1] * a[a.size() - 1], a[0] * a[0]);
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        llvec a(n);
        for (ll i{0}; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        cout << MINSUBARRY(a) << " " << MAXSUBARRY(a) << endl;
    }

    return 0;
}