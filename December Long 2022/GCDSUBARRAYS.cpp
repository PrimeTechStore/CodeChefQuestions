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

int main()
{
    tc
    {
        ll n{0}, k{0};
        cin >> n >> k;

        int val = (n * (n + 1)) / 2;

        if (val > k)
        {
            cout << -1 << endl;
            continue;
        }

        for (int i{0}; i < n - 1; i++)
            cout << 1 << " ";
        cout << k - (n - 1) << endl;
    }

    return 0;
}