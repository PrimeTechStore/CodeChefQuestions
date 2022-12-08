#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, sumele = 0;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sumele += a[i];
        }

        vector<int> oddele, evenele;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                evenele.push_back(a[i]);
            else
                oddele.push_back(a[i]);
        }

        sort(oddele.begin(), oddele.end(), greater<int>());
        sort(evenele.begin(), evenele.end(), greater<int>());

        int i = 0, j = 0, sum = 0;
        int halfele = n / 2;

        while (k && halfele > 0)
        {
            if (oddele[i] < evenele[j])
            {
                sum += evenele[j];
                j++;
                halfele--;
                k--;
            }
            else
            {
                sum += oddele[i];
                i++;
            }
        }

        while (halfele > 0)
        {
            sum += oddele[i];
            i++;
            halfele--;
        }

        string ans = sumele - sum > sum ? "YES" : "NO";

        cout << ans << endl;
    }
    return 0;
}

// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;

// int main() 
// {
// 	int t;
// 	cin>>t;
	
// 	while(t-- != 0)
// 	{
// 	    int n,k,x=0,y=0,l,m,sumB=0,sumC=0,SumBf=0,SumCf=0,flag=0;
// 	    cin>>n>>k;
	    
// 	    if(n%2 == 0)
// 	    {
// 	        l = n/2;
// 	        m = n/2;
// 	    }
// 	    else
// 	    {
// 	        l = (n+1)/2;
// 	        m = n/2;
// 	    }
	    
// 	    int A[n],B[l],C[m];
// 	    for(int i=0 ; i<n ; i++)
// 	    {
// 	        cin>>A[i];
	        
// 	        if(i%2 == 0)
// 	        {
// 	            B[x] = A[i];
// 	            sumB = sumB + B[x];
// 	            x++;
// 	        }
// 	        else
// 	        {
// 	            C[y] = A[i];
// 	            sumC = sumC + C[y];
// 	            y++;
// 	        }
// 	    }
	    
// 	    if(sumC > sumB)
// 	    {
// 	        cout<<"YES"<<endl;
// 	    }
// 	    else
// 	    {
// 	        sort(B,B+l);
// 	        sort(C,C+m);
	    
// 	        for(int i=0 ; i<k ; i++)
// 	        {
// 	            sumC = sumC + B[(x-1)-i] - C[i];
// 	            SumCf = sumC;
// 	            sumB = sumB + C[i] - B[(x-1)-i];
// 	            SumBf = sumB;
	            
// 	            if(SumCf > SumBf)
// 	            {
// 	                flag = 1;
// 	                break;
// 	            }
// 	            if(k > m+1)
// 	            {
// 	                break;
// 	            }
// 	        }
	    
// 	        if(flag == 1)
// 	        {
// 	            cout<<"YES"<<endl;
// 	        }
// 	        else
// 	        {
// 	            cout<<"NO"<<endl;
// 	        }
// 	    }
// 	}
// 	return 0;
// }