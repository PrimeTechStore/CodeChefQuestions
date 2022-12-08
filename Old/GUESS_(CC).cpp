#include <bits/stdc++.h>
using namespace std;

#define ll long long

int gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a = 0, b = 0, c = 0;
        cin >> a >> b;
        c = (a * b) / 2;
        if (a % 2 == 0 || b % 2 == 0)
            cout << "1/2" << endl;
        else
            cout << c << "/" << (a * b) << endl;
    }
    return 0;
}