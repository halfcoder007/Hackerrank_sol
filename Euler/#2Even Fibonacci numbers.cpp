#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_SIZE 81

void calculate_fibonacci(unsigned long long int *fibonacci, int size) {
    fibonacci[0] = 1;
    fibonacci[1] = 2;
    for (int i = 2; i < size; i++)
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
}

int main() {
    
    int t;
    unsigned long long int value, sum, fibonacci[MAX_SIZE];
    
    calculate_fibonacci(fibonacci, MAX_SIZE);

    cin>>t;
    
    while (t--) {
        
        cin>>value;
        
        sum = 0;
        for (int i = 0; i < MAX_SIZE && fibonacci[i] <= value; i++)
            if (fibonacci[i] % 2 == 0)
                sum += fibonacci[i];
        
        cout<<sum<<endl;
    }
    return 0;
}

