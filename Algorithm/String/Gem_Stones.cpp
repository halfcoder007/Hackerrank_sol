#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int cnt[26];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		int len = s.length();
		bool hash[26];
		fill(hash, hash + 26, false);
		for (int j = 0; j < len; j++)
			hash[s[j] - 'a'] = true;
		for (int j = 0; j < 26; j++)
			if (hash[j])
				cnt[j]++;
	}
	int ans = 0;
	for (int i = 0; i < 26; i++)
		if (cnt[i] == n)
			ans++;
	cout << ans << endl;
	return 0;
}
