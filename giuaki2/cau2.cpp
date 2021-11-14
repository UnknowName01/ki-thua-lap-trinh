#include  <bits/stdc++.h>
using namespace std;
int a[12];  
int n, k;
long long gt(int n) {
    long long s = 1;
    for (int i = 1; i <= n; i++)
        s *= i;
    return s;
}
long long tinhtohop(int n, int k)
{
    return  gt(n) / (gt(k)*gt(n - k));
}
void result()  
{
    cout << "[";
    for (int i = 1; i <= k; i++){
        cout << a[i];
        if(i < k) cout << " ";
    }
    cout << "]";
    cout << endl;
}
void tohop(int i)  
{
    for (int j = a[i-1] + 1; j <= n-k+i; j++)  
    {
        a[i] = j;
        if (i == k) {
            result();
        }
        else{
            tohop(i + 1);  
        }
    }
}

int main()  
{
    int test;
	cin >> test;
	while(test --)
    {  
        cin >> n >> k;
        cout << tinhtohop(n, k) << endl;
        tohop(1);
    }
    return 0;  
}