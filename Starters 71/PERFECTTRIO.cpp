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
        int a{0}, b{0}, c{0};
        cin >> a >> b >> c;
        string ans = "";

        if (
            a == b + c ||
            b == a + c ||
            c == a + b)
            ans = "YES";
        else
            ans = "NO";

        cout << ans << endl;
    }

    return 0;
}