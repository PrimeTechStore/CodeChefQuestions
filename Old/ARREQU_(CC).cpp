#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool ans(map<int, int> m, int n)
{
    int half = 0;
    if (n % 2 == 0)
        half = n / 2;
    else
        half = (n + 1) / 2;
    for (auto i : m)
    {
        if (i.second > half)
            return false;
    }
    return true;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        if (ans(m, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}