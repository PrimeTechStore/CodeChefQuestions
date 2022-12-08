#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define strvec vector<string>
#define pb push_back
#define ssmap map<string, string>
#define ssimap map<ssmap, int>
#define sset set<string>

int travel(ssimap dis, strvec cities)
{
    int n = cities.size();
    int ans = 0;
    sset visited;
    for (int i = 0; i < n - 1; i++)
    {
        string city1 = cities[i];
        string city2 = cities[i + 1];
        ssmap temp;
        //find if cites route is given
        temp[city1] = city2;
        if (dis.find(temp) != dis.end())
        {
            ans += dis[temp];
            
        }
    }
}

int main()
{
    int n = 0, m = 0;
    string s;
    cin >> n;
    for (int i{0}; i < n; i++)
        cin >> s;

    ssimap dis;
    cin >> m;
    for (int i{0}; i < n; i++)
    {
        string source, destination;
        int dist;
        cin >> source >> destination >> dist;
        ssmap temp;
        temp[source] = destination;
        dis[temp] = dist;
    }

    int q = 0;
    cin >> q;
    while (q--)
    {
        int k = 0;
        strvec cities;
        cin >> k;
        for (int i{0}; i < k; i++)
        {
            cin >> s;
            cities.pb(s);
        }

        int ans = 0;
        ans = travel();

        if (ans == -1)
            cout << "ERROR" << endl;
        else
            cout << ans << endl;
    }

    return 0;
}