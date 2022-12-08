#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;

        cout << 1 << " ";
        ll val = 1;

        for (int i = 1; i <= n; i++)
        {
            cout << val << " ";
            val *= 2;
        }

        cout << endl;
    }
    return 0;
}