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

bool divK(llvec &arr, ll k)
{

    ll mul{1};
    for (int i{0}; i < arr.size(); i++)
    {
        mul *= arr[i];
        if (mul % k == 0)
            return true;
        
        mul %= k;
    }
    return false;
}

int main()
{
    tc
    {
        ll n{0}, k{0};
        cin >> n >> k;
        llvec arr(n);
        f0inc(n) cin >> arr[i];

        if (divK(arr, k))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}