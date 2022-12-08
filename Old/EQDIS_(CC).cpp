#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<ll> llvec;
typedef map<ll, ll> llmap;

bool EQDIS(llvec arr)
{
    llmap mp;
    ll n = arr.size();
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    ll cnt = 0;
    for (auto i : mp)
    {
        if (i.second % 2 > 2)
            return false;
        cnt += (i.second & 1);
    }
    return cnt % 2 == 0;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n = 0;
        cin >> n;
        llvec arr(n);

        for (int ll i{0}; i < n; i++)
            cin >> arr[i];

        if (EQDIS(arr))
            cout << "Yes";
        else
            cout << "No";

        cout << endl;
    }

    return 0;
}