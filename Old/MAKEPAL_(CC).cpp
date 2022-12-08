#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 0, countod = 0;
        cin >> n;
        int a[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] % 2 != 0 ? countod++ : 1 + 2;
        }
        cout << countod / 2 << endl;
    }
    return 0;
}