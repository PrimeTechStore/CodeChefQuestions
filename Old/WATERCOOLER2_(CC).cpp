#include <bits/stdc++.h>

using namespace std;

int WATERCOOLER2(int x, int y)
{
    return ((y % x) ? (y / x) : ((y / x) - 1));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a = 0, b = 0;
        cin >> a >> b;
        cout << WATERCOOLER2(a, b)<<endl;
    }
    return 0;
}