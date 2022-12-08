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

string EVENSPLIT(string s)
{
    if (s.length() < 3)
        return s;

    ll c1{0}, c0{0};
    fauto(s)
    {
        if (i == '1')
            c1++;
        else
            c0++;
    }

    string upt = "";
    f0inc(c0)
        upt += '0';

    f0inc(c1)
        upt += '1';

    return upt;
}

int main()
{
    tc
    {
        ll n;
        cin >> n;
        string str;
        cin >> str;

        cout << EVENSPLIT(str) << endl;
    }

    return 0;
}