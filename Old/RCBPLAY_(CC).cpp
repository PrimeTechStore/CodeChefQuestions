# include <iostream> 
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int x= 0,y=0,z=0;
        cin>>x>>y>>z;
        int res;
        res = x + (z*2);
        string ans = "";
        ans = y <= res? "Yes":"No";
        cout<< ans<<endl; 
    }
    return 0;
}