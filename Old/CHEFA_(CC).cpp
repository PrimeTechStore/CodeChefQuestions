#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end(), greater<ll>());

        ll sum = 0;
        for (int i = 0; i < n; i += 2)
            sum += a[i];

        cout << sum << endl;
    }

    return 0;
}