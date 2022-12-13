#include <iostream>
using namespace std;

int main()
{ // maximum bitwise XOR
    int t{0};
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a;
        cin >> b;
        int a0{0}, a1{0}, b0{0}, b1{0};
        for (int i = 0; i < a.length(); i++)
            a[i] == '0' ? a0++ : a1++;
        for (int i = 0; i < b.length(); i++)
            b[i] == '0' ? b0++ : b1++;
        int ans1 = min(a0, b1) + min(a1, b0);

        string ans = "";
        for (int i = 0; i < ans1; i++)
            ans += '1';
        for (int i = 0; i < a.length() - ans1; i++)
            ans += '0';
        cout << ans << endl;
    }
    return 0;
}