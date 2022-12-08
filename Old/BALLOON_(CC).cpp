#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int i = 0, count = 0;

        for (; i < n; i++)
        {
            if (a[i] >= 1 && a[i] <= 7)
                count++;
            if (count == 7)
                break;
        }

        cout << i << endl;
    }

    return 0;
}