#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x= 0;
        cin>>x;
        if ( x >= 1 && x < 100)
        cout<<"Easy";
        if ( x >= 100 && x < 200)
        cout<<"Medium";
        if ( x >= 200 && x < 300)
        cout << "Hard";

        cout<<endl;
    }
    return 0;
}