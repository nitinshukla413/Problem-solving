#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int>s(n); for(int i=0;i<n;i++) cin >> s[i];
    int ind[5] = {0,0,0,0,0};
    for(int j=0;j<n;j++){
       ind[s[j]-1]++;
    }
    int pos=0,maxn=0;
    for(int k=0;k<5;k++){
      if(ind[k]>maxn){
          maxn = ind[k];
          pos = k;
      }
    }
    cout << pos + 1;
