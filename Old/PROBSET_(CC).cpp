#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s1[n], s2[n], s;
        for (int i = 0; i < n; i++)
            cin >> s1[i] >> s2[i];

        int flag = 1, count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s1[i][0] == 'c')
            {
                for (int j = 0; j < m; j++)
                    if (s2[i][j] == '0')
                    {
                        flag = 0;
                        break;
                    }
                if (flag == 0)
                    break;
            }
            if (s1[i][0] == 'w')
            {
                for (int j = 0; j < m; j++)
                    if (s2[i][j] == '1')
                        count++;

                if (count == m)
                    flag = 2;
                else
                    count = 0;
            }
        }
        if (flag == 0)
            cout << "INVALID" << endl;
        else if (flag == 1)
            cout << "FINE" << endl;
        else
            cout << "WEAK" << endl;
    }

    return 0;
}