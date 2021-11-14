#include <bits/stdc++.h>
using namespace std;
void max(long a[], int n)  
{
    int i, j, len = 1, k;  i = 0;
    while (i < n) {
        k = 1;
        for (j = i + 1; a[j-1] <= a[j] && j < n; j++) {
            k++;
        }
        if (len < k){
            len = k;  i = j;  
		}
        else  i++;
    }  
	cout << len + 1 << endl;
}
int main()  {
    int t; cin >> t;
	while(t--) {
        int n; cin >> n;
		long a[n];
		for(int i = 0; i < n; ++i) cin >> a[i];
		max(a, n);
	}
}