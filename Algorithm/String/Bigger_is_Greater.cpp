#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
   int t;
    cin>>t;
    while(t--)
        {
        char s[1000];
        cin>>s;
        int len=strlen(s);
        if(next_permutation(s,s+len))
            cout<<s<<endl;
        else
            cout<<"no answer"<<endl;
    }
    return 0;
}
