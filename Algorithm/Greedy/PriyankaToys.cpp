#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
        {
        int w;
        cin>>w;
        v.push_back(w);
    }
    sort(v.begin(),v.end());
    int ans=1;
    int prev=v[0];
    for(int i=1;i<n;i++)
        if(v[i]-prev>4)
            prev=v[i],ans++;
    cout<<ans;
    return 0;
}
