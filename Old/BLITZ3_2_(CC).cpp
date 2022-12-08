#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n=0,a=0,b=0;
       cin >> n>>a>>b;
       cout<<(2*(180+n)-(a+b))<<endl;
    }
    return 0;
}