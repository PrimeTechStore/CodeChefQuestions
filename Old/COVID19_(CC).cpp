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
        int n, count = 1, mini = 10, maxi = 0;
        cin >> n;
        llvec arr(n);
        f0inc(n) cin >> arr[i];

        f0inc(n - 1)
        {
            if (arr[i + 1] - arr[i] <= 2)
                count++;
            else
            {
                mini = min(mini, count);
                maxi = max(maxi, count);
                count = 1;
            }
        }
        mini = min(mini, count);
        maxi = max(maxi, count);
        cout << mini << " " << maxi << endl;
    }

    return 0;
}