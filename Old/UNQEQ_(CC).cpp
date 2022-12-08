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
        if (n % 4 == 0)
        {
            cout << "Yes" << endl;
            for (int i = 1; i <= n / 4; i++)
                cout << i << " ";
            for (int i = ((3 * n) / 4) + 1; i <= n; i++)
                cout << i << " ";
                cout<< endl;
            for (int i = (n / 4) + 1; i <= (3 * n) / 4; i++)
                cout << i << " ";
        }
        else
            cout << "No"<< endl;
    }
    return 0;
}