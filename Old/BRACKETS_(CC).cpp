#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<ll> llvec;
typedef unordered_map<ll, ll> lluomp;
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)

int BRACKETS(string str)
{
    ll b{0}, maxb{0};
    for (auto i : str)
    {
        if (i == '(')
            b++;
        if (i == ')')
            b--;

        maxb = max(maxb, b);
    }

    return maxb;
}

int main()
{
    tc
    {
        string str{""};
        cin >> str;

        ll n = BRACKETS(str);

        for (ll i{0}; i < n; i++)
            cout << '(';
        for (ll i{0}; i < n; i++)
            cout << ')';
    }

    return 0;
}