#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];
        vector<int> ans(N, 1);
        for (int i = N - 2; i >= 0; i--)
        {
            if ((A[i] > 0) != (A[i + 1] > 0))
                ans[i] = ans[i + 1] + 1;
            else
                ans[i] = 1;
        }
        for (int i = 0; i < N; i++)
            cout << ans[i] << ((i == N - 1) ? "\n" : " ");
    }

    return 0;
}