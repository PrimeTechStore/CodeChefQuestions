#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 0, d = 0, val = 0, res = 0;
        cin >> n >> d;

        val = (d < 11) ? pow(2, d) : pow(2, 10) * pow(3, (d - 10));
        res = val <= n ? val : n;

        cout << res << endl;
    }
    return 0;
}