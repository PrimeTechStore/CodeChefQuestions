#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool BINBASBASIC(string arr, int k)
{
    ll cnt = 0, n = arr.length();
    for (int i = 0; i < n / 2; i++)
        cnt += (arr[i] != arr[n - 1 - i]);
    if (k < cnt)
        return false;
    else
    {
        if (n & 1)
            return true;
        else
        {
            if ((k - cnt) & 1)
                return false;
            else
                return true;
        }
    }
    return true;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n = 0, k = 0;
        cin >> n >> k;

        string ar;

        cin >> ar;

        if (BINBASBASIC(ar, k))
            cout << "Yes";
        else
            cout << "No";

        cout << endl;
    }

    return 0;
}