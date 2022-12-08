#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x = 0, y = 0;
        cin >> x >> y;
        if (x % 2)
            cout << "No";
        else if (!x && (y % 2))
            cout << "No";
        else
            cout << "Yes";
        cout << endl;
    }
    return 0;
}