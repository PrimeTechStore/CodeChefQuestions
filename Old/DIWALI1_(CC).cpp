#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int items = 0, p = 0, a = 0, b = 0, c = 0, x = 0, y = 0;
        cin >> p >> a >> b >> c >> x >> y;
        int f1 = 1, f2 = 1;
        while (p || (f1 && f2))
        {
            cout<<'3';
            if (b >= c)
            {
                f1 = 0;
                for (; 1;)
                    if (p >= (c + (y * a)))
                    {
                        cout<<'1';
                        p = p - (c + (y * a));
                        items++;
                    }
                    else
                        break;
            }
            else if (b < c)
            {
                f2 = 0;
                for (; 1;)
                    if (p >= (b + (x * a)))
                    {
                        cout<<'2';
                        p = p - (b + (x * a));
                        items++;
                    }
                    else
                        break;
            }
            else
                break;
        }
        cout << items<<endl;
    }
    return 0;
}