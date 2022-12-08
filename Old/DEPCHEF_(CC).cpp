#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f0inc(n) for (int i{0}; i < n; i++)
#define fauto(m) for (auto i : m)
typedef vector<ll> llvec;
typedef unordered_map<ll, ll> lluomp;
typedef unordered_set<ll> lluos;
#define tc    \
    ll t{0};  \
    cin >> t; \
    while (t--)

ll DEPCHEF(llvec a, llvec d, ll n)
{
    ll maxans = -1;

    f0inc(n)
    {
        ll ans{-1};
        if (i == 0)
        {
            if (d[i] > (a[n - 1] + a[i + 1]))
                ans = d[i];
        }
        else if (i == (n - 1))
        {
            if (d[i] > (a[n - 2] + a[0]))
                ans = d[i];
        }

        else if (d[i] > (a[i - 1] + a[i + 1]))
            ans = d[i];

        maxans = max(ans, maxans);
    }

    return maxans;
}

int main()
{
    tc
    {
        ll n;
        cin >> n;
        llvec a(n), d(n);

        f0inc(n) cin >> a[i];
        f0inc(n) cin >> d[i];

        cout << DEPCHEF(a, d, n) << endl;
    }

    return 0;
}