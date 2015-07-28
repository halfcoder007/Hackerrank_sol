#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    char c[101][101];
    int t;
    cin>>t;
    while(t--)
        {
        int n;
        cin>>n;
        getchar();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                c[i][j]=getchar();
            getchar();
            
        }
        for(int i=0;i<n;i++)
            sort(c[i],c[i]+n);
        bool flag=true;
        for(int i=0;i<n;i++)
            for(int j=0;j<n-1;j++)
                  if(c[j][i]>c[j+1][i])
                    flag=false;
            if(flag)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
            
        
    }
    return 0;
}

