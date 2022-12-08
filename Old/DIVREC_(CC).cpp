#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, a, b;
        cin >> x >> a >> b;
        if (x % a != 0 || b > a)
        {
            cout << -1 << endl;
            continue;
        }
        ll n = (x * b) / a;

        ll sum = 0;
        for (ll i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
                if (i != n / i)
                    sum += n / i;
            }
        }

        if (sum == x)
        {
            cout << n << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}