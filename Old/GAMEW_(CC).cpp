#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n = 0, nob = 1;
        string str;
        cin >> n;
        cin >> str;
        for (int i = 1; i < n; i++)
            if (str[i - 1] != str[i])
                nob++;

        string ans = (nob % 3 == 2) ? "RAMADHIR" : "SAHID";
        cout << ans << endl;
    }
    return 0;
}