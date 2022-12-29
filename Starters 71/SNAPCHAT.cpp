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
        llvec a(n), b(n);
        f0inc(n) cin >> a[i];
        f0inc(n) cin >> b[i];
        ll streak{0}, ans{0};
        f0inc(n)
        {
            if (a[i] && b[i])
            {
                streak++;
                ans = max(ans, streak);
            }
            else
                streak = 0;
        }
        cout << ans << endl;
        
    }

    return 0;
}