#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        for (int i = 0; i < n - 1; i++)
            str.push_back('3');

        if (n % 3 != 0)
            str.push_back('3');
        else
            str.push_back('9');

        cout << str << endl;
    }
    return 0;
}