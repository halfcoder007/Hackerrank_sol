#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;


int main() {
   int i,j,n;
    int sum=0;
    int diff=0;
    cin>>n;
    int a[n][n];
for(i=0;i<n;i++){
    for(j=0;j<n;j++)
        {
        cin>>a[i][j];
       
    }
}
        
    
         
    for(i=0;i<n;i++)
        {
        sum +=a[i][i];
        diff +=a[i][n-i-1];
             
    }
  //  cout<<sum<<endl;
   //cout<<diff<<endl;
    cout<<abs(sum-diff);
    
    return 0;
}
