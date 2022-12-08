#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 0, a = 0, b = 0, c = 0;
        cin >> n >> a >> b >> c;
        int res = 0, res1 = 0;
        res = (a + c);
        res1 = b/2;
        if (n <= res && n <= b)
            cout << "Yes"<<endl;
        else
            cout << "No"<<endl;
    }
    return 0;
}