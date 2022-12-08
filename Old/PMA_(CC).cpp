#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        vector<ll> even, odd;
        for (ll i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                even.push_back(abs(arr[i]));
            else
                odd.push_back(abs(arr[i]));
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        ll evenSum = 0, oddSum = 0;
        for (ll i = 0; i < even.size(); i++)
            evenSum += even[i];
        for (ll i = 0; i < odd.size(); i++)
            oddSum += odd[i];
        ll sum = evenSum - oddSum;
        ll temp;
        temp = even[0];
        even[0] = odd[odd.size() - 1];
        odd[odd.size() - 1] = temp;
        evenSum = 0;
        oddSum = 0;
        for (ll i = 0; i < even.size(); i++)
            evenSum += even[i];
        for (ll i = 0; i < odd.size(); i++)
            oddSum += odd[i];
        cout << max(sum, (evenSum - oddSum)) << endl;
    }

    return 0;
}