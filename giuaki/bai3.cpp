#include <bits/stdc++.h>
using namespace std;
 
long long tich(long long n)
{
    long long count = 1;
    while (n) {
        count *= (n % 10);
        n /= 10;
    }
    return count;
}

long long max(long long n)
{
    string b = to_string(n);
 
    long long ans = n;
    for (int i = 0; i < b.size(); i++) {
        if (b[i] == '0') continue;
        string curr = b;
        curr[i] = ((curr[i] - '0') - 1) + '0';

        for (int j = i + 1; j < curr.size(); j++)
            curr[j] = '9';
 
        long long num = 0;
        for (auto c : curr)
            num = num * 10 + (c - '0');
 
        if (num >= 1 && tich(ans) < tich(num)) ans = num;
    }
    return ans;
}
 
int main()
{
    int test;
	cin >> test;
	while(test --)
    {
        long long n;
        cin >> n;
        cout << max(n) << endl;
    }
 
    return 0;
}