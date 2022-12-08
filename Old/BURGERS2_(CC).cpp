#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y,n,r;
        cin>>x>>y>>n>>r;
        if ( r/n < x)
        {
            cout<<-1<<endl;
            continue;
        }
        if ( r/n >= y)
        {
            cout<<"0 "<<n<<endl;
            continue;
        }
        int pre = (r-(x*n))/(y-x);
        int sim = n-pre;

        cout<<sim<<" "<<pre<<endl;

    }
    return 0;
}