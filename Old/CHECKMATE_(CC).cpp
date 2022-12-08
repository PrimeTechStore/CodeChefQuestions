#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int l = 0; l < t; l++)
    {
        int a, b, c, d, e, f;
        cin >> a >> b;
        cin >> c >> d;
        cin >> e >> f;
        if ((a == 1) && (((c == 2 && d != b && d != b - 1 && d != b + 1) && (f != b + 1 && f != b - 1)) || ((e == 2 && f != b && d != b - 1 && d != b + 1) && (f != b + 1 && f != b - 1))) && d != f)
            cout << "YES\n";
        else if ((a == 8) && (((c == 7 && d != b && d != b - 1 && d != b + 1) && (f != b + 1 && f != b - 1)) || ((e == 7 && f != b && d != b - 1 && d != b + 1) && (f != b + 1 && f != b - 1))) && d != f)
            cout << "YES\n";
        else if ((b == 1) && (((d == 2 && c != a && c != a - 1 && c != a + 1) && (e != a + 1 && e != a - 1)) || ((f == 2 && e != a && c != a - 1 && c != a + 1) && (e != a + 1 && e != a - 1))) && c != e)
            cout << "YES\n";
        else if ((b == 8) && (((d == 7 && c != a && c != a - 1 && c != a + 1) && (e != a + 1 && e != a - 1)) || ((f == 7 && e != a && c != a - 1 && c != a + 1) && (e != a + 1 && e != a - 1))) && c != e)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}