#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<ll> llvec;
typedef unordered_map<ll, ll> lluomp;
#define tc    \
    ll t{0};  \
    cin >> t; \
    while (t--)

bool PERMEXIS(llvec num)
{
    sort(num.begin(), num.end());
    for (ll i{1}; i < num.size(); i++)
        if (abs(num[i] - num[i - 1]) > 1)
            return false;

    return true;
}

int main()
{
    tc
    {
        ll n{0};
        cin >> n;
        llvec num(n);
        for (ll i{0}; i < n; i++)
            cin >> num[i];

        if (PERMEXIS(num))
            cout << "Yes";
        else
            cout << "No";

        cout << endl;
    }

    return 0;
}