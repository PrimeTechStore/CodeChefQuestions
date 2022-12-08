#include <bits/stdc++.h>
using namespace std;

string antiPalindrome(string s, int len)
{
    if (len % 2)
        return "NO";
    map<char, int> mp;
    for (int i = 0; i < len; i++)
        mp[s[i]]++;

    // max char
    int max = 0;
    for (auto it = mp.begin(); it != mp.end(); it++)
        if (it->second > max)
            max = it->second;

    if (max > (len / 2))
        return "NO";
    else
    {
        sort(s.begin(), s.end());
        string ans = s;
        int si = 0;
        for (int i = 0; i < len; i += 2)
            ans[i] = s[si++];
        for (int i = len - 1; i >= 0; i -= 2)
            ans[i] = s[si++];
        return "YES\n" + ans;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << antiPalindrome(s, n) << endl;
    }
    return 0;
}