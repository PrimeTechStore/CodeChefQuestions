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
        int a{0}, b{0}, x{0};
        cin >> a >> b >> x;
        if (a == b)
            cout << "Yes";
        else if (abs(a - b) != x && abs(a - b) % x == 0)
            cout << "Yes";
        else
            cout << "No";
    }

    return 0;
}