#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool ans(int n, int m)
{
    if (n % 2 != 0)
        return false;
    if (n % m != 0)
        return false;
    if ((n / m) % 2 != 0)
        return false;

    return true;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n = 0, m = 0;
        cin >> n >> m;
        if (ans(n, m))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}