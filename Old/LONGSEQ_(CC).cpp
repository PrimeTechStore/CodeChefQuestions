#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<ll> llvec;
typedef unordered_map<ll, ll> lluomp;
typedef unordered_set<ll> lluos;
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)

bool LONGSEQ(string str)
{
    ll zero{0}, ones{0};

    for (ll i{0}; i < str.length(); i++)
    {
        if (str[i] == '0')
            zero++;
        if (str[i] == '1')
            ones++;

        if (zero > 1 && ones > 1)
            return false;
    }

    return (zero == 1 || ones == 1);
}

int main()
{
    tc
    {
        string str{""};
        cin >> str;

        if (LONGSEQ(str))
            cout << "Yes";
        else
            cout << "No";
    }

    return 0;
}