#include <iostream>
using namespace std;

int main() {
	int n, k;
	string str;
	cin >> n >> str >> k;
	for (int i = 0; i < n; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') 
           cout << (char)((str[i] - 'A' + k) % 26 + 'A');
		else if (str[i] >= 'a' && str[i] <= 'z') 
            cout << (char)((str[i] - 'a' + k) % 26 + 'a');
		else cout << str[i];
	}
	cout << endl;
	return 0;
}
