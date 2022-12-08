#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m = 0, n = 0, p = 0;
        cin >> n >> m;

        if (abs(m - n) <= 1)
        {
            cout << m + n + 2 << endl;
            p = n >= m ? 0 : 1;
            for (int i = 0; i < m + n + 2; i++)
            {
                cout << p;
                p = p == 1 ? 0 : 1;
            }
        }
        else
        {
            int mi = min(m, n);
            cout << 1 + ((mi + 1) * 2) + (3 * (max(m, n) - (mi + 1))) << endl;
            p = n > m ? 0 : 1;
            cout << p;
            for (int i = 0; i < (mi + 1); i++)
            {
                p = p == 1 ? 0 : 1;
                cout << p;
                p = p == 1 ? 0 : 1;
                cout << p;
            }
            int l = 0;
            for (int i = 0; i < (max(m, n) - (mi + 1)); i++)
            {
                l = p;
                cout << l;
                l = l == 1 ? 0 : 1;
                cout << l;
                l = l == 1 ? 0 : 1;
                cout << l;
            }
        }
        cout << endl;
    }
    return 0;
}