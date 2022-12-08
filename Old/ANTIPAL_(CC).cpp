#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
        int n=0,ans;
        cin>>n;
        if (n%2 != 0)
        cout<< "-1";
        else 
        for (int i=0; i<n; i++)
         {
            ans = i%2 == 0 ? 0 : 1;
            cout<<ans;
         }
        cout << endl;
    }
    return 0;
}