#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 0, constc = 0, vowelc = 0;
        string s = " ", p = " ";
        cin >> n;
        cin >> s;
        cin >> p;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?' || p[i] == '?')
                if (s[i] == p[i])
                    1 + 1;
                else if (s[i] == 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'e' || p[i] == 'a' || p[i] == 'i' || p[i] == 'e' || p[i] == 'o' || p[i] == 'u')
                

        }
    }
    return 0;
}