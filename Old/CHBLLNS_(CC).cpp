#include <bits/stdc++.h>
using namespace std;

#define ll long long
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
        ll a{0}, b{0}, c{0}, k{0}, ans{0}, pro{0};
        cin >> a >> b >> c;
        cin >> k;

        if (a < k)
            ans += a;
        else
            pro++;
        if (b < k)
            ans += b;
        else
            pro++;
        if (c < k)
            ans += c;
        else
            pro++;

        ans += (pro * (k - 1)) + 1;

        cout << ans;
    }

    return 0;
}