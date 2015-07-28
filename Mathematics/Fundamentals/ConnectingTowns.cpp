#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		long long total = 1;
		for (int i = 0; i < n - 1; i++)
		{
			int route;
			cin >> route;
			total = (total * route) % 1234567;
		}
		cout << total << endl;
	}
	return 0;
}
