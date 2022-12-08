#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll SUBINC(vector<ll> arr)
{
    if (arr.size() == 1)
        return 1;
    
    ll count = 0;
    ll i = 0;
    while (i < arr.size())
    {
        ll j = i + 1;
        while (j < arr.size() && arr[j] >= arr[j - 1])
            j++;
        count += (j - i) * (j - i + 1) / 2;
        i = j;
    }
    return count;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        cout << SUBINC(a) << endl;
    }

    return 0;
}