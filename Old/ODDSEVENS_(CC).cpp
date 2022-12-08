#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int a=0,b=0;
       cin >>a>>b;
       string ans = (a+b)%2 ? "Alice":"Bob"; 
       cout << ans << endl;
    }
    return 0;
}