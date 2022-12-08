#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> guest(1001, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            guest[x] = guest[x] + 1;
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            guest[x] = guest[x] - 1;
        }
        int net = 0;
        int max_guest = INT_MIN;
        for (int i = 0; i < guest.size(); i++)
        {
            net = net + guest[i];
            max_guest = max(max_guest, net);
        }
        cout << max_guest << endl;
    }
    return 0;
}