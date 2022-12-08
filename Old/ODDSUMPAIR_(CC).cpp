#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f0inc(n) for (int i{0}; i < n; i++)
#define fauto(m) for (auto i : m)
typedef vector<ll> llvec;
typedef unordered_map<ll, ll> lluomp;
typedef unordered_set<ll> lluos;
#define tc    \
    ll t{0};  \
    cin >> t; \
    while (t--)

int main()
{
    tc
    {
        ll aaaa{0}, baaa{0}, caaa{0};
        cin >> aaaa >> baaa >> caaa;

        bool evenaaa{false}, oddaaa{false};

        if (aaaa % 2 || baaa % 2 || caaa % 2)
            oddaaa = !oddaaa;
        if (!(aaaa % 2) || !(baaa % 2) || !(caaa % 2))
            evenaaa = !evenaaa;

        if (evenaaa && oddaaa)
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }

    return 0;
}