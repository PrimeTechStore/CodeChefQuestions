#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        ll a[n];
        int num = n, start = 0, rear = n - 1;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (flag)
                a[start++] = num--;
            else
                a[rear--] = num--;

            flag = !flag;
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }

    return 0;
}