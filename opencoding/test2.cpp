#include <bits/stdc++.h>
using namespace std;
int max(int a[], int n)
{
	if(n == 0) return 1;
	int count = 0;
	for(int i = 0; i < n; ++i){
		if(a[i] > count) count = a[i];
	}
	return count;
}
void result(long a[], int n)
{
	int b[n] = {1};
	int count;
	for(int i = 1; i < n; i++) {
		for(int j = 0; j < i; j++) {
			if(a[i] > a[j]) {
				count = max(b, j+1) + 1;
			}
		}
		b[i] = count;
	}
	cout << max(b, n) << endl;
}
int main(){

    int t; cin >> t;
	while(t--) {
        int n; cin >> n;
		long a[n];
		for(int i = 0; i < n; ++i) cin >> a[i];
		result(a, n);
	}
}