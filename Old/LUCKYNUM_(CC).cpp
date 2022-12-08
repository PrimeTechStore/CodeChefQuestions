#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int a = 0, b = 0, c = 0;
        cin>>a>>b>>c;
        string res =  a == 7 || b == 7 || c ==7 ? "Yes" : "No";
        cout<<res<<endl;
    }
    return 0;
}