#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int a = 0, b = 0, c = 0;
        int mx = 0, my = 0, mz = 0;
        int x = 0, y = 0, z = 0;
        cin >> a >> b >> c;
        cin >> mx >> my >> mz;
        x = mx;
        y = my;
        z = mz;
        int time = 240;
        while (time)
        {
            if (x <= z && y <= z)
            {
                for (int i = 0; i < 20; i++)
                    if (time >= z && c)
                    {
                        c--;
                        time = time - z;
                    }
                z = 0;
            }
            if (x <= y && z <= y)
            {
                for (int i = 0; i < 20; i++)
                    if (time >= y && b)
                    {
                        b--;
                        time = time - y;
                    }
                y = 0;
            }
            if (x>= y && x>= z)
            {
                for (int i = 0; i < 20; i++)
                    if (time >= x && a)
                    {
                        a--;
                        time = time - x;
                    }
                x = 0;
            }
            cout<<time;
        }
        cout << (20 - c) * mz + (20 - b) * my + (20 - a) * mx;
    }
}