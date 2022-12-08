#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 0, k = 0;
        string str = "", ans = "";
        cin >> n >> k;
        cin >> str;
        ans = str;

        for (int i = 0; i < k; i++)
        {
            if (i % 2 == 0)
                ans[k - i - 1] = str[i / 2];
            else
                ans[k - i - 1] = str[k - 1 - (i / 2)];
        }
        cout << ans << endl;
    }
    return 0;
}