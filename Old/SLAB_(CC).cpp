#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll salary;
        cin >> salary;
        ll tax = 0;
        if (salary < 250000)
            tax = 0;
        else if (salary < 500000)
            tax = (salary - 250000) * 5 / 100;
        else if (salary < 750000)
            tax = (salary - 500000) * 10 / 100 + 12500;
        else if (salary < 1000000)
            tax = (salary - 750000) * 15 / 100 + 12500 + 50000;
        else if (salary < 1250000)
            tax = (salary - 1000000) * 20 / 100 + 12500 + 50000 + 112500;
        else if (salary < 1500000)
            tax = (salary - 1250000) * 25 / 100 + 12500 + 50000 + 112500 + 200000;
        else
            tax = (salary - 1500000) * 30 / 100 + 12500 + 50000 + 112500 + 200000 + 312500;

        cout << salary - tax << endl;
    }

    return 0;
}