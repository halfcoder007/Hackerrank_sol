#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,j,n;
    float pos,neg,neutral;
    pos=neg=neutral=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
        {
        if(a[i]>0)
            pos++;
        else if(a[i]<0)
            neg++;
            else if(a[i]==0)
            neutral++;
    }
    cout<<pos/n<<endl;
    cout<<neg/n<<endl;
    cout<<neutral/n<<endl;
    return 0;
}

