#include <iostream>
using namespace std;

int main()
{
    int t{0};
    cin >> t;
    while (t--)
    {
        int inv{0}, inf{0};
        cin >> inv >> inf;

        string ans = inv >= (2 * inf) ? "YES" : "NO";
        cout << ans << endl;
    }
    return 0;
}