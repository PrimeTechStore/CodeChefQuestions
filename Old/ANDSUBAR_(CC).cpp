#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, po = 0, res = 0;
        cin >> n;
        po = floor(log2(n));
        res = max(n - pow(2, po) + 1, pow(2, po - 1));
        cout << res<<endl;
    }
    return 0;
}