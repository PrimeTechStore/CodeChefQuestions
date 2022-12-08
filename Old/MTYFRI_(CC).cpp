#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int ans = 0;
        int res = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            int incr = a[i] * (1 + res);
            ans += incr;
            res = incr;
        }
        cout << ans << endl;
    }
    return 0;
}