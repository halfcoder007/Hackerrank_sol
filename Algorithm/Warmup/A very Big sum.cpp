#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    long long sum=0;
    for(int i=0;i<n;i++)
{
        int val;
        cin>>val;
        sum +=val;
        
    }
    cout<<sum;
    return 0;
}

