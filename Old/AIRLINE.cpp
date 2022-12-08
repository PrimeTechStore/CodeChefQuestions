#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int flag = -1;
        int arr[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
        int min = -1;
        for (int i = 0; i < 3; i++)
        {
            if (arr[i] <= arr[4] && min < arr[i])
            {
                flag = i;
                min = arr[i];
            }
        }
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            if (i != flag)
                sum += arr[i];
        }

        if (sum <= arr[3] && flag != -1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}