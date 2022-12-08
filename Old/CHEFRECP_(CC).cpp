#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f0inc(n) for (ll i{0}; i < n; i++)
#define fauto(m) for (auto i : m)
typedef vector<ll> llvec;
typedef unordered_map<ll, ll> lluomp;
typedef unordered_set<ll> lluos;
#define tc    \
    ll t{0};  \
    cin >> t; \
    while (t--)
// <------------------------template------------------------>

bool checknot1(lluomp mp)
{
    fauto(mp)
    {
        if (i.second != 1)
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
        llvec a(n + 1);

        f0inc(n) cin >> a[i];
        a[n] = -1;

        lluomp occ, feq;
        ll count{0};
        f0inc(n)
        {
            if (a[i] == a[i + 1])
                count++;
            else
            {
                occ[a[i]]++;
                feq[count]++;
                count = 1;
            }
        }

        if (checknot1(occ) && checknot1(feq))
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }

    return 0;
}