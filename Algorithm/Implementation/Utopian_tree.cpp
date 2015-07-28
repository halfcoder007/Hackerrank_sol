#include <iostream>
using namespace std;

int height(int n) {

    int h=1;
    int c=0;
    while(n--){
        if(c==0){ h*=2;c=1;}
        else{
            h++;
            c=0;
        }
        
    }
   return h;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
    
}

