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
    int n,k;
    cin>>n>>k;
    vector<int> v;
    vector<int> w;
    for(int i=0;i<n;i++)
        {
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<n;i++)
        {
       int b;
        cin>>b;
        w.push_back(b);
    }
    
    sort(v.begin(),v.end());
    sort(w.begin(),w.end());
    int cnt=0;
    int dec=0;
    for(int i=0;i<n;i++)
        {
        if(v[i]+w[n-i-1]>=k)
            cnt++;
        else
            break;
    }
    if(cnt==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
    return 0;
}

