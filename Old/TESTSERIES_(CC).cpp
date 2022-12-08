#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int counte = 0, counti = 0;
        for (int i = 0; i < 5; i++)
        {
            int a = 0;
            cin >> a;
            if (a == 1)
                counti++;
            if (a == 2)
                counte++;
        }
        if(counte == counti)
        cout<<"Draw";
        else if(counte > counti)
        cout<<"England";
        else 
        cout<<"India";

        cout<<endl;
    }
    return 0;
}