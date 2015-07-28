#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    
int t,a,b;
int perfect;
int count;
int n;
cin >> t; 

for(int i = 0; i<t; i++){
    count = 0;
    n = 1;
    perfect = 0;
    cin >> a;
    cin >> b;

    while (perfect <= b){


        if (perfect >= a && perfect <= b)
            count++;

        perfect = n*n;
        n++;


    }
    cout << count << endl;
}
    
    return 0;
}

