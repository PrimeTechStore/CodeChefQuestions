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
        ll n{0}, pd{0};
        cin >> n >> pd;
        llvec ages(n);
        f0inc(n) cin >> ages[i];

        ll risk{0}, nonrisk{0};
        f0inc(n) ages[i] >= 80 || ages[i] <= 9 ? risk++ : nonrisk++;

        int a = ceil(risk / 2.0);
        int b = ceil(nonrisk / 2.0);
        cout << a << b << endl;
    }

    return 0;
}