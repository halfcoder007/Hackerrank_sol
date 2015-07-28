#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int getmid(int n) {
    while(n > 0) {
        if(n%3 == 0)
            break;
        else
            n -= 5;
    }
    return n;
}
int main() {
    int t,occur,n,mid;
    cin>>t;
   
    while(t--)
        {  int n;
         cin>>n;
        mid=getmid(n);
        if(mid<0)
            cout<<"-1"<<endl;
        else
            {
      occur=mid/3;
        while(occur--)
            cout<<"555";
        
        occur=(n-mid)/5;
       while(occur--)
         
            cout<<"33333";
        
        cout<<endl;
        
        }
    
           
    }
    return 0;
}
