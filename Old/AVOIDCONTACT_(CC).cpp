#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x = 0, y = 0, ans = 0;
        cin >> x >> y;
        ans = (x == y) ? ((2 * x) - 1) : ((2 * y) + (x - y));
        cout << ans << endl;
    }
    return 0;
}