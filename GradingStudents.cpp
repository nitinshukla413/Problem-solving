#include<iostream>
using namespace std;
int main()
{
    int n,r,t;
    cin>>n;
    int grades[n];
    for(int i=0;i<n;i++)
    {
        cin>>grades[i];
    }
    for(int i=0;i<n;i++)
    {
        if(grades[i]>=38)
        {
            r=grades[i]%5;
            t=5-r;
           if(t<3)
           {
                grades[i]=grades[i]+t;
           }  
        }
    
    }
    for(int i=0;i<n;i++)
    {
        cout<<grades[i]<<endl;
    }
}
