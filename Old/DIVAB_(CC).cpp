#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a = 0, b = 0, n = 0;
        cin >> a >> b >> n;

        if (a == b || a % b == 0)
        {
            cout << -1 << endl;
            continue;
        }
        if (n % a == 0 && n % b != 0)
        {
            cout << n << endl;
            continue;
        }

        // output the smallest number ≥ N which is divisible by A and is not divisible by B.

        int val = (n / a) + 1;
        for (int i = val;; i++)
        {
            if (((i * a) % b) != 0)
            {
                cout << a * i << endl;
                break;
            }
        }
    }
    return 0;
}