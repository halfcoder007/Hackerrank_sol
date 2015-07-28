#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define N 110000

void sieve(int* primes) {
    int p, i, j, s[N];
    
    for (i = 0; i < N; i++)
        s[i] = 1;
    s[0] = s[1] = 0;

    p = 2;
    while (p < N) {
        for (j = 2*p; j < N; j+=p) {
            s[j] = 0;
        }
        for (i = p+1; p < N; i++) {
            if (s[i] == 1) {
                p = i;
                break;
            }
        }
    }
    int index = 1;
    for (i = 0; i < N; i++) {
        if (s[i] == 1) {
            primes[index++] = i;
        }
    }
}

int main() {
    int n, t, primes[100002];
    
    sieve(primes);
    
    cin>>t;
    
    while (t--) {
        
        cin>>n;
        cout<<primes[n]<<endl;
    }
    return 0;
}

