#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <string.h>
using namespace std;

int main() {
    int t,n,i,len;
    cin>>t;
    while(t--)
        {
        string a;
        cin>>a;
        int len=a.size();
        int cnt=0;
        for(int i=1;i<len;i++)
            {
            if(abs(a[i]-a[i-1])==abs(a[len-i-1]-a[len-i]))
                cnt++;
            
        }
        if(cnt==len-1)
            cout<<"Funny"<<endl;
        else
            cout<<"Not Funny"<<endl;
    }
    
    return 0;
}

