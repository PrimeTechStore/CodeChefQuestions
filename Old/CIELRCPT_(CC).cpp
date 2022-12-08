#include <bits/stdc++.h>

using namespace std;

int price[12] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c = 0, p = 0;
        c = 0;
        cin >> p;
        while (p != 0)
        {
            for (int i = 11; i >= 0; i--)
            {
                if (p >= price[i])
                {
                    p -= price[i];
                    c++;
                    break;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}