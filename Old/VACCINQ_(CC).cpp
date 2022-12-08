#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int time = 0, n = 0, p = 0, x = 0, y = 0;
        int tem = 0;
        cin >> n >> p >> x >> y;
        for (int i = 0; i < n; i++)
        {
            int in = 0;
            cin >> in;
            if (i < p)
                if (in)
                    time = time + y;
                else
                    time = time + x;
        }
        cout << time << endl;
    }
    return 0;
}