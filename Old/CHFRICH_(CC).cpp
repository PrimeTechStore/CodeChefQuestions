#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p = 0, m = 0, v = 0;
        cin >> p >> m >> v;
        cout << (m - p) / v << endl;
    }
    return 0;
}