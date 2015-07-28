#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
int gcd ( int a, int b )
{
 
  return b?gcd(b,a%b):a;
}



int main(){
	int t;
    cin>>t;
	
	while(t--){
		int l;
		int b;
		cin>>l>>b;
		int x= (l/gcd(l,b)*b/gcd(l,b));
        cout<<x<<endl;
	}
    return 0;
}
