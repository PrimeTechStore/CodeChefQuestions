#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 0, cz = 0, co = 0;
        string str = " ";
        cin >> n;
        cin >> str;

        for (int i = 0; i < n; i++)
            str[i] == '0' ? cz++ : co++;

        if (co == 0 || cz == 0)
        {
            cout << "0" << endl;
            continue;
        }
        int res = cz < co ? cz - 1 : co - 1;
        cout << res << endl;
    }
    return 0;
}