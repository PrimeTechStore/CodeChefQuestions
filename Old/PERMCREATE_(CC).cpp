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
        ll n{0};
        cin >> n;
        if (n > 4)
        {
            ll j{1};
            llvec ans(n);
            for (int i{0}; i < n; i += 2)
                ans[i] = j++;
            for (int i{1}; i < n; i += 2)
                ans[i] = j++;

            fauto(ans) cout << i << " ";
        }
        if (n == 4)
            cout << 2 << " " << 4 << " " << 1 << " " << 3;
        else
            cout << -1;
        cout << endl;
    }

    return 0;
}