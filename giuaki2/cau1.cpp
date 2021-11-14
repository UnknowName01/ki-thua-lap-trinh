#include <bits/stdc++.h>
using namespace std;
main()
{
    long long search[100];
    bool check[100] = {0};
	int n, m;
    long int t;
	cin >> n >> m;
	//
	for (int i = 1; i <= n; i++) {
		cin >> t;
		if (check[t] == 0) {
			check[t] = 1;
			search[t] = i;
		}
	}
	//
	for (int i = 1; i <= m; i++) {
		cin >> t;
		if (check[t] == 1) {
			cout << search[t] << " ";
		}
		else cout << 0 << " ";
	}
}