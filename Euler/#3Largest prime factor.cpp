#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


long long int max_prime(long long int n) {
   long long int max = 1, i;
    while (n % 2 == 0) {
        n /= 2;
        if (2 > max) {
            max = 2;
        }
    }
    for (i = 3; i * i <= n; i+=2) {
        while (n % i == 0) {
            if (i > max)
                max = i;
            n /= i;
        }
    }
    if (n > 2 && n > max) {
        max = n;
    }
    return max;
}

int main() {
    int t;
   long long int val, max;
    
    cin>>t;
    
    while (t--) {
        cin>>val;
        max = max_prime(val);
        cout<<max<<endl;
    }
    return 0;
}

