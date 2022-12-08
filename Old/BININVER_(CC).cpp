#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        int arr[n] = {0};
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int count = 0;
        while (true)
        {
            int flag = 0;
            for (int i = 0; i < n; i++)
                if (arr[i] % 2 == 0)
                {
                    flag++;
                    arr[i] /= 2;
                }
            if (flag == n)
                count++;
            else
                break;
        }
        cout << count <<endl;
    }
    return 0;
}