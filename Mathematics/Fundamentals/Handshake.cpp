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
        int n;
        cin>>n;
        if(n==1)
            cout<<"0"<<endl;
        else if(n>1)
            {
            long long fact;
            fact=n*(n-1)/2;
            
        cout<<fact<<endl;
        }
            
    }
    return 0;
}

