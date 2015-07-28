#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd_of(int a,int b)
    {
    return b?gcd_of(b,a%b):a;
}

int lcm(int a,int b)
    {
   int gcd=gcd_of(a,b);
    return a*b/gcd;
}



int main() {
    int t;
    cin>>t;
    while(t--)
        {
        int n;
        int result=1;
        cin>>n;
        for(int i=1;i<=n;i++)
            {
            result=lcm(result,i);
        }
        cout<<result<<endl;
    }
    return 0;
}




