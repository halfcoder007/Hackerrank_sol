#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int t, div;
    long int x, limit;
    
    cin>>t;
    
    while (t--) {
        
        cin>>x;
        limit = sqrt(x);
        
        div = 0;
        for (int i = 1; i <= limit; i++) {
            if (x % i == 0) {
                if (i % 2 == 0) {
                    div++;
                }
                if (x / i != i && (x/i) % 2 == 0) {
                    div++;
                }
            }
        }
        cout<<div<<endl;
    }
    return 0;
}

