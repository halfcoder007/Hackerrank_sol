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
        string str;
        cin>>str;
        int j=str.length()-1;
        int i;
        while(i<j)
            {
            if(str[i]==str[j])
               {
                
             i++;j--;
            }
            else if(str[i+1]==str[j])
                {
                cout<<i<<endl;
                break;
            }
            else
                {
                cout<<j<<endl;
                break;
            }
            if(!(i<j))
                cout<<"-1"<<endl;
        }
    }
    return 0;
}

