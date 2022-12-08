#include <bits/stdc++.h>
using namespace std;

int ismin(int n, int d)
{
    int newn = n, rem, count = 0, c = 0;
    while (newn > 0)
    {
        rem = newn % 2;
        newn /= 10;
        c++;
        if (rem == d)
        {
            newn = newn * pow(10, c) + (rem - 1) * pow(10, c - 1);
            count = newn - n;
            c = 0;
        }
    }
    return count;
}

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, d = 0;
        cin >> n >> d;
        cout << ismin(n, d)<<endl;
    }
    return 0;
}