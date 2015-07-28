#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--)
        {
        long long b,w;
        long long x,y,z;
        long long cost=0;
        cin>>b>>w;
        cin>>x>>y>>z;
        if(x>y+z)
            cost=b*(y+z)+w*y;
        else if(y>x+z)
            cost=b*x+w*(x+z);
        else
            cost=b*x+w*y;
            cout<<cost<<endl;
    }
    return 0;
}

