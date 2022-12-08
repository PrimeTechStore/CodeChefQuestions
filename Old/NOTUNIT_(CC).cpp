#include <iostream>
using namespace std;

#define ll long long

ll solve(ll n, ll k)
{
    if ((n + k) % k == 0)
        return n;
    else
        return (n + k) - (n + k) % k;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a % 2 == 0)
        {
            if (b >= a + 2)
                cout << a << " " << a + 2 << endl;
            else
            {
                cout << -1 << endl;
            }
            continue;
        }
        if (a % 3 == 0)
        {
            if (b >= a + 3)
                cout << a << " " << a + 3 << endl;
            else
            {
                cout << -1 << endl;
            }
            continue;
        }
        if (a % 2 == 1)
        {
            if (b >= a + 3)
                cout << a + 1 << " " << a + 3 << endl;
            else
            {
                cout << -1 << endl;
            }
            continue;
        }
    }
    return 0;
}