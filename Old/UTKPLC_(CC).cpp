#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c1 = ' ', c2 = ' ', c3 = ' ', s1 = ' ', s2 = ' ', ans = ' ';
        cin >> c1 >> c2 >> c3;
        cin >> s1 >> s2;

        if (s1 == c1)
            cout << s1;
        else if (s2 == c1)
            cout << s2;
        else if (s1 == c2)
            cout << s1;
        else if (s2 == c2)
            cout << s2;

        cout << endl;
    }
    return 0;
}