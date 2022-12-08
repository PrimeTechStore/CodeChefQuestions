#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<ll> llvec;
typedef unordered_map<ll, ll> lluomp;
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)

bool RECNDSTR(string a)
{
    unordered_map<char, ll> mp;
    ll n = a.length();
    for (ll i{0}; i < n; i++)
        mp[a[i]]++;

    if (mp.size() == 1)
        return true;

    if (mp.size() > 2)
        return false;

    if (n % 2)
        return false;

    for (ll i{1}; i < n; i++)
        if (a[i - 1] == a[i])
            return false;

    return true;
}

int main()
{
    tc
    {
        string a;
        cin >> a;
        if (RECNDSTR(a))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}