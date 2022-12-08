#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k = 0;
        cin >> k;
        if (k % 2 == 0)
            cout << ((k / 2) * 3) - (k / 2);
        else
            cout << (((k + 1 )/ 2) * 3) - (k / 2);
        cout << endl;
    }
    return 0;
}