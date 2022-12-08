#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 0, k = 0;
        cin >> n >> k;
        int arr[n + 1] = {0};
        if (n == k)
        {
            for (int i = 1; i <= n; i++)
                cout << i << " ";
            cout << endl;
        }
        else if (k == (n - 1))
            cout << "-1"<<endl;
        else
        {
            for (int i = 1; i <= n; i++)
                arr[i] = i;
            int val = 0;
            for (int i = k + 1; i < n; i++)
                swap(arr[i], arr[i+1]);
            for (int i = 1; i <= n; i++)
                cout << arr[i]<<" ";
            cout << endl;
        }
    }
    return 0;
}