#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k = 0, n = 0;
        vector<int> arr{0};
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a = 0;
            cin >> a;
            arr.push_back(a);
        }
        cin >> k;
        int temp =0;
        temp = arr[k];
        sort(arr.begin(), arr.end());
        auto res = find(arr.begin(), arr.end(), temp);
        int in = res - arr.begin();
        cout << in<<endl;
    }
    return 0;
}