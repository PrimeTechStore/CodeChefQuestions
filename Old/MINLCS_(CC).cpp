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

int ans(string s10, string s20, int l10, int l20)
{
    if (!l10 || !l20)
        return 0;
    if (s10[l10 - 1] == s20[l20 - 1])
        return (1 + ans(s10, s20, l10 - 1, l20 - 1));
    return max(ans(s10, s20, l10, l20 - 1), ans(s10, s20, l10 - 1, l20));
}

int main()
{
    tc
    {
        string s10, s20;
        int len;
        cin >> len;
        cin >> s10;
        cin >> s20;

        cout << ans(s10, s20, len, len) << endl;
    }

    return 0;
}