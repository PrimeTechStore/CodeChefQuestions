#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n=0;
        cin >> n;
        ll arr[n]={0};
        for (ll i=0; i<n; i++)
        cin >> arr[i];
        sort(arr,arr+n);
        ll res1 =((arr[n-1]-arr[0])*arr[n-2]);
        ll res2 =((arr[n-2]-arr[0])*arr[n-1]);
        ll res = res1 > res2 ? res1 : res2;
        cout << res <<endl;
    }
    return 0;
}