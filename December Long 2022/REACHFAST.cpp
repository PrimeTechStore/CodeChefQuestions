#include <iostream>
using namespace std;

int main()
{
    int t{0};
    cin >> t;
    while (t--)
    {
        int posX{0}, posY{0}, k{0};
        cin >> posX >> posY >> k;
        int ans = abs(posX - posY) / k + (abs(posX - posY) % k ? 1 : 0);
        cout << ans << endl;
    }
    return 0;
}