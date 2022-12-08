#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f0inc(n) for (ll i{0}; i < n; i++)
#define f0iinc(i, n) for (i = 0; i < n; i++)
#define fauto(m) for (auto i : m)
typedef vector<ll> llvec;
typedef vector<string> strvec;
typedef unordered_map<ll, ll> lluomp;
typedef unordered_map<char, ll> cluomp;
typedef unordered_set<ll> lluos;
#define tc    \
    ll t{0};  \
    cin >> t; \
    while (t--)

const string check = "ceodhf";

int main()
{
    tc
    {
        ll n;
        cin >> n;
        strvec input(n);
        cluomp count;

        f0inc(n) cin >> input[i];

        int k{0}, l{0};

        f0iinc(k, n)
            f0iinc(l, input[k].length())
                count[input[k][l]]++;

        llvec arr;

        f0inc(check.length())
        {
            if (i < 2)
                arr.push_back(count[check[i]] / 2);
            else
                arr.push_back(count[check[i]]);
        }

        sort(arr.begin(), arr.end());

        cout << arr[0] << endl;
    }

    return 0;
}