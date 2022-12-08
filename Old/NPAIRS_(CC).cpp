#include <bits/stdc++.h>
#include <math.h>
using namespace std;

#define ll long long

int main()
{
    ll t = 0;
    cin >> t;
    while (t--)
    {
        string s = "";
        ll n = 0, flag = 0;
        cin >> n;
        cin >> s;
        for (ll i = 0; i < n; i++)
        {
            ll a = (i + 10) > n ? n : (i + 10);
            for (ll j = i + 1; j < a; j++)
                if (j - i == abs((int)s[i] - (int)s[j]))
                    flag++;
        }
        cout << flag << endl;
    }
    return 0;
}