#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int x = 0, y = 0, z = 0;
        string ans = " ";
        cin >> x >> y >> z;
        ans = (x + y) == z ? "Equal" : (y + x) < z ? "Planebus"
                                                   : "Train";
        cout << ans << endl;
    }
    return 0;
}