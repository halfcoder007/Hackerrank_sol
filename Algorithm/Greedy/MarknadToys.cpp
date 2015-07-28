#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() 
{
    long long n, k; cin >> n >> k;
    vector<int> prices;
    for(int i = 0; i < n; i++)
    {
        int p; cin >> p;
        prices.push_back(p);
    }
    
    int answer = 0;
    
    sort(prices.begin(),prices.end());
    long long sum=0;
   
    for(int i=0;i<n;i++)
        {
        sum +=prices[i];
        if(sum>k)
            break;
        answer++;
    }
    
    cout << answer << endl;
    
    return 0;
}

