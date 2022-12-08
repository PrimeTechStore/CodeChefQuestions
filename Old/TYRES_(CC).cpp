#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        string ans = n % 4 ? "Yes" : "No";
        cout << ans << endl;
    }
    return 0;
}