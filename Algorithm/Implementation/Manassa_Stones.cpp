#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
        {
        int n,a,b;
        cin>>n;
        cin>>a;
        cin>>b;
        if(a==b)
            {
            cout<<a*(n-1)<<endl;
            continue;
        }
        if(a<b){
            int t=n-1;
        for(int i=0;i<n;i++,t--)
            {
            cout<<t*a+i*b<<" ";
        }
        cout<<endl;
        }
    
    else
        {
        int t=n-1;
    for(int i=0;i<n;i++,t--)
        {
        cout<<t*b+i*a<<" ";
    }
    cout<<endl;
    }
    }
    return 0;
}

