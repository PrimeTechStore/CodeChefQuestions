#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<ll> llvec;
typedef unordered_map<ll, ll> lluomp;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        n--;
        char str[n];
        cin >> str;

        ll count = 0;
        if (str[0] == '1')
            count++;
        if (str[n - 1] == '0')
            count++;

        for (ll i{0}; i < n - 1; i++)
            if (str[i] == '0' && str[i] == '1')
                count++;

        cout << count << endl;
    }

    return 0;
}