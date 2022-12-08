#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int temp = 0;
        for (int i= 0; i < 7; i++)
        {
            int a = 0;
            cin >> a;
            temp = temp + a;
        }
        if (temp > 3)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}