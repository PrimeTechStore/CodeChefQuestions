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
    ll n{0}, temp{0};

    cin >> n;

    llvec ar(n);

    f0inc(n) cin >> ar[i];

    sort(ar.begin(), ar.end());
    f0inc(n - 1) temp = max(temp, ar[i] % ar[i + 1]);

    cout << temp;

    return 0;
}