#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, x = 0, y = 0;
        cin >> n >> x >> y;
        if ((n + 1) * y >= x)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
    return 0;
}