#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0, k = 0;
        string str;
        cin >> str;
        sort(str.begin(), str.end());
        for (int i = 0; i < str.length(); i++)
            sum += ((i + 1) * (str[i] - 96));
        cout << sum << endl;
    }
    return 0;
}