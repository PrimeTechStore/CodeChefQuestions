#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int box[4] = {};
        for (int i = 0; i < 4; i++)
            cin >> box[i];
        int count = 1, d = box[3];
        for (int i = 0; i < 3; i++)
        {
            if (box[i] <= d)
                d = d - box[i];
            else
            {
                count++;
                d = box[3];
                d = d - box[i];
            }
        }
        cout<<count<<endl;
    }
    return 0;
}