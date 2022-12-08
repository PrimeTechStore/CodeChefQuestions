#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d = 0, l = 0, r = 0;
        cin>> d>>l>>r;
        if (d < l) 
        cout<< "Too Early"<<endl;
        else if ( d > r)
        cout << "Too Late"<<endl;
        else 
        cout<< "Take second dose now"<<endl;
    }
    return 0;
}