#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 0, m = 0;
        cin >> n >> m;
        int i = n, res1 = n, res2 = n, res = 0;
        while (i <= m && (m - i) >= res)
        {
            int a = i;
            int b = m - (m % i);
            if (abs(a - b) >= res)
            {
                res1 = a;
                res2 = b;
                res = abs(a - b);
            }
            i++;
        }
        cout << res1 << " " << res2 << endl;
    }
    return 0;
}