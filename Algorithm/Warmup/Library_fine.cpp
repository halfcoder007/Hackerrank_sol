#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int d,m,y,d1,m1,y1;
    int fine;
    cin>>d>>m>>y;
    cin>>d1>>m1>>y1;
    if(y>y1)
        fine=10000;
    else if(y<y1)
        fine=0;
    else if(y==y1 && m<m1)
        fine=0;
    else if(y==y1 && m!=m1)
        fine=(m-m1)*500;
    else if(m==m1 && y==y1 && d==d1)
        fine=0;
   else if(m==m1 && y==y1 && d<d1)
        fine=0;
    else if(m==m1 && y==y1 &&d!=d1)
        fine=(d-d1)*15;
    cout<<fine;
    return 0;
}

