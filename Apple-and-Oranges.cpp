#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s,t,a,b,m,n;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int countApples=0,countOranges=0;
    int apple[m];
    int oranges[n];
    int tApple[m];
    int tOranges[n];
    for(int i=0;i<m;i++)
    {
        cin>>apple[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>oranges[i];
    }
    
    for(int i=0;i<m;i++)
    {
        tApple[i]=a+apple[i];
        
        
    }
            
    for(int i=0;i<m;i++)
    {
        if(tApple[i]>=s && tApple[i]<=t)
        {
            countApples++;
        }
        
    }  
    cout<<countApples<<endl;  
    for(int i=0;i<n;i++)
    {
        tOranges[i]=b+oranges[i];
        
        
    }
    for(int i=0;i<n;i++)
    {
        if(tOranges[i]>=s && tOranges[i]<=t)
        {
            countOranges++;
        }
        
    }  
    cout<<countOranges<<endl;
    
}
