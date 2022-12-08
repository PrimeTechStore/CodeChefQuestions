#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<ll> llvec;
typedef unordered_map<ll, ll> lluomp;

string xoring(string a, string b, int n)
{
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            ans += "0";
        else
            ans += "1";
    }
    return ans;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string str[n];
        for (int i{0}; i < n; i++)
            cin >> str[i];

        string b = str[0];
        for (int i{1}; i < n; i++)
            b = xoring(str[i], b, 10);
        ll count{0};
        for (ll i{0}; i < 10; i++)
            if (b[i] == '1')
                count++;

        cout << count << endl;
    }

    return 0;
}