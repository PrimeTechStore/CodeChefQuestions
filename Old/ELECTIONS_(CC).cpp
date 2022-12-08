#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c;
        string res = a > 50 ? "A" : b > 50 ? "B" : c > 50 ? "C" : "NOTA";
        cout << res << endl;
    }
    return 0;
}