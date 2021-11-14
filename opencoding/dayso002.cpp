//DAYSO002 - Dãy con K phần tử có tổng bằng S
#include <bits/stdc++.h>
using namespace std;
int v[30], check[30];
int n, k, s;
int save = 0, c = 0, luu = 0;
void tryit(int i) {
	for(int j = 1 + luu; j <= n-k+i; ++j) {
		check[i] = v[j];
		luu = j;
        if(i == k) {
            for(int l = 1; l <= k; ++l) c += check[l];
            if(c == s) save++;
            c = 0;
        }
        else tryit(i+1);
	}
}
int main(){

    int t; cin >> t;
	while(t--) {
		cin >> n >> k >> s;
		save = 0; c = 0; luu = 0;
		for(int i=1; i<=n; ++i) {
			cin >> v[i];
		}
		tryit(1);
		cout << save << endl;
	}
}

/*
#include <bits/stdc++.h>
using namespace std;

int count(int *a, int n, int k, int s, int st = 0, int i = 0, int c = 0)
{
	if (i == k) return (c == s);
	int x = 0;
	for (int j = st; j <= n-k+i; ++j)
	{
		x += count(a, n, k, s, j+1, i+1, c+a[j]);
	}
	return x;
}
int main(){

    int t; cin >> t;
	while(t--) {
        int a[30], n, k, s, st = 0, i = 0, c = 0;
		cin >> n >> k >> s;
		for(int j=0; j<n; ++j) {
			cin >> a[j];
		}
		cout << count(a, n, k, s, st, i, c) << endl;
	}
}

*/