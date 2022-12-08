#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<ll> llvec;
typedef unordered_map<ll, ll> lluomp;
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)

int main()
{
    tc
    {
        ll n;
        cin >> n;
        llvec arr(n);
        for (int i{0}; i < n; i++)
            cin >> arr[i];
        ll count{0};
        if (arr[0] != arr[1])
            count++;
        if (arr[n - 2] != arr[n - 1])
            count++;
        for (int i{1}; i < n - 1; i++)
            if (arr[i] != arr[i - 1] || arr[i] != arr[i + 1])
                count++;
        cout << count << endl;
    }

    return 0;
}