#include <bits/stdc++.h>
using namespace std;

bool issubsequence(string &s1, string &s2)
{
    int n = s1.length(), m = s2.length();
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (s1[i] == s2[j])
            i++;
        j++;
    }
    return i == n;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;

        str1 += str2;

        int k = 0;
        cin >> k;
        string str3 = "";

        for (int i = 0; i < k; i++)
        {
            string tem = "";
            cin >> tem;
            str3 += tem;
        }

        //sort
        sort(str1.begin(), str1.end());
        sort(str3.begin(), str3.end());
        cout << str1 << " " << str3 << endl;

        if (issubsequence(str3, str1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}