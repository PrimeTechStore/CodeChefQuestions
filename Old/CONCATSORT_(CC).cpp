#include <bits/stdc++.h>
using namespace std;

#define ll long long
// check if sorted
// bool isSorted(vector<int> &v)
// {
//     for (int i = 0; i < v.size() - 1; i++)
//     {
//         if (v[i] > v[i + 1])
//             return false;
//     }
//     return true;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v, a, b;
//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             v.push_back(x);
//         }
//         a = v;
//         sort(a.begin(), a.end());
//         int i = 0, j = 0;
//         while (i < n && j < n)
//         {
//             if (a[j] == v[i])
//             {
//                 i++;
//                 j++;
//             }
//             else
//             {
//                 b.push_back(v[i]);
//                 i++;
//             }
//         }
//         if (isSorted(b))
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
//     return 0;
// }

void slove()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ind1 = -1;
    ll ele1 = -1;

    for (ll i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            ind1 = i + 1;
            ele1 = a[ind1];
            break;
        }
    }
    if (ind1 == -1 || ind1 == n - 1)
    {
        cout << "YES" << endl;
        return;
    }

    ll leftmax = -1;
    for (int i = 0; i < ind1; i++)
    {
        if (a[i] > ele1)
        {
            leftmax = a[i];
            break;
        }
    }
    ll rightmax = a[ind1 - 1];
    for (int i = ind1 + 1; i < n; i++)
    {
        if (a[i] >= rightmax)
        {
            rightmax = a[i];
        }
        else if (a[i] <= leftmax && a[i] >= ele1)
        {
            ele1 = a[i];
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        slove();
    return 0;
}