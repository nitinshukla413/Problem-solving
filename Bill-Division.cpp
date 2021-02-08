#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, k, sum = 0, sum1= 0;
    cin >> n >> k;

    vector<int> bill(n);

    for(int i = 0; i < n; i++)
    {
        cin >> bill[i];
        sum += bill[i];
    }

    int b;
    cin >> b;

    if((sum - bill[k])/2 == b)
    {
        cout<<"Bon Appetit";
    }
    else
    {
        int sum1 = (sum/2) - (sum - bill[k])/2;
        cout << sum1 ;
    }
    return 0;
}
