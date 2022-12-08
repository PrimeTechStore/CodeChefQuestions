#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> boys(n), girls(n);
        for (int i = 0; i < n; i++)
            cin >> boys[i];
        for (int i = 0; i < n; i++)
            cin >> girls[i];

        sort(boys.begin(), boys.end(), greater<ll>());
        sort(girls.begin(), girls.end());
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
            ans[i] = boys[i] + girls[i];

        cout << *max_element(ans.begin(), ans.end()) << endl;
    }

    return 0;
}