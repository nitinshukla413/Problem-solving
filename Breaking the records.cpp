#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];
    int countmax=0,countmin=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }    
    int max=a[0],min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            countmax++;
        }
        if(a[i] < min)
        {
            min = a[i];
            countmin++;
        }
    }
    
    cout<<countmax<<" "<<countmin<<endl;
    
    
    return 0;
    
}
