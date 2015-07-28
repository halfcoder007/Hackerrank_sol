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
        string a;
        string b;
        cin>>a;
        cin>>b;
        int len=a.size();
        int len2=b.size();
        int c[26]={0};
        string common="NO";
        for(int i=0;i<len;i++)
            {
            c[a[i]-'a']++;
        }
        for(int i=0;i<len2;i++)
            {
            if(c[b[i]-'a'])
                {
                common="YES";
            }
        }
        cout<<common<<endl;
    }
    return 0;
}

