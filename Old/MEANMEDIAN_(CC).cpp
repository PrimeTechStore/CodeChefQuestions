
#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<ll> llvec;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int a = 0, b = 0;
        cin >> a >> b;
        cout << b << " " << b << " " << ((3 * a) - (2 * b)) << endl;
    }

    return 0;
}