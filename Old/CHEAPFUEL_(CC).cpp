#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x = 0, y = 0, a = 0, b = 0, k = 0;
        cin >> x >> y >> a >> b >> k;
        int fp = x + (a * k);
        int fd = y + (b * k);

        string res = fp == fd ? "Same Price" : fp < fd ? "Petrol" : "Diesel";
        cout << res << endl;
    }
    return 0;
}