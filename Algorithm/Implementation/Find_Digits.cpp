#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int a,b,c,d,k,temp,count=0;
int arr[100];

cin>>a;
for(b=0;b<a;b++)
{
cin>>arr[b];
}


for(b=0;b<a;b++)
    {
    count=0;
    k=arr[b];
    temp=k;
    while(temp!=0)
        {
        c=temp%10;
        if(c!=0)
            {
        if(k%c==0)
           {
            count=count+1;
            }
        }
    temp=temp/10;
    }

cout<<count<<endl;


}

    return 0;
}

