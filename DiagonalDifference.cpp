#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,i,j,sum1=0,sum2=0;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        
            cin>>a[i][j];
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        if(i==j)
        {
            sum1+=a[i][j];
        }
        
        
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)==(n-1))
            {
                sum2+=a[i][j];
            }
                
        }
    }
    
    cout<<abs(sum2-sum1)<<endl;
    
    
}
