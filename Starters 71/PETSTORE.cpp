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

bool hasPair( lluomp m)
{
    fauto(m)
    {
        if (i.second % 2)
            return false;
    }
    return true;
}

int main()
{
    tc
    {
        ll n{0};
        cin >> n;
        llvec a(n);
        f0inc(n) cin >> a[i];
        lluomp m;
        f0inc(n) m[a[i]]++;

        string ans = hasPair(m) ? "YES" : "NO";
        cout << ans << endl;
    }

    return 0;
}