#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x1,v1,x2,v2,a=0,b=0;
    cin>>x1>>v1>>x2>>v2;
    if(v1>v2)
    {
        if((x2-x1)%(v2-v1)==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
   
   
}
