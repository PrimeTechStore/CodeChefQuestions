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
        if (n < 300)
        cout << 3000;
        else 
        cout << n * 10;;
    }

    return 0;
}