# include <iostream> 
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int x =0, y=0;
        cin>>x>>y;
        string ans ="";
        ans = (x+y)%2 == 0 ? "Yes":"No";
        cout<<ans<<endl;
    }
    return 0;
}