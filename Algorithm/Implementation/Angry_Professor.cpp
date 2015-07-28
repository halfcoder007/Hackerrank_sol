#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n,k;
    int pos,neg;
    cin>>t;
 while(t--)
 { 
     cin>>n>>k;
     pos=neg=0;
    int a[n];
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
        {
        if(a[i]<=0)
            neg++;
        else if (a[i]>0)
            pos++;        
            
    }
    if(neg>=k)
        cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
    
    return 0;
}

