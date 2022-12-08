#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l = 0, r = 0;
        cin >> l >> r;
        if (!(l % 3))
            l = l;
        else if (!((l + 1) % 3))
            l = l + 1;
        else
            l = l + 2;
        if (!(r % 3))
            r = r;
        else if (!((r - 1) % 3))
            r = r - 1;
        else
            r = r - 2;

        int res  = 0;
        res = ((r - l)/3) + 1;
        cout<<res;
    }
    return 0;
}