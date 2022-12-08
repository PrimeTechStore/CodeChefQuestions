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
        ll ans{0};
        llvec ar(3);
        cin >> ar[0] >> ar[1] >> ar[2];
        for (int i{0}; i < 3; i++)
            if (ar[i])
                ar[i]--, ans++;

        sort(ar.begin(), ar.end(), greater<ll>());

        if (ar[0] && ar[1])
            ar[0]--, ar[1]--, ans++;

        if (ar[2] && ar[1])
            ar[2]--, ar[1]--, ans++;

        if (ar[0] && ar[2])
            ar[0]--, ar[2]--, ans++;

        cout << ans << endl;
    }

    return 0;
}