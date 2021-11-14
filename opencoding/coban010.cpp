//COBAN010 - Luỹ thừa dư
//Chia de tri
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const ll mod = 1e9 + 7;
ll power(ll x, ll n)
{
	if(n == 0) return 1;
	ll k = power(x, n/2);
	if(n % 2 == 0) return k*k%mod;
    return x*(k*k%mod)%mod;
}

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		cin.ignore();
		ll x, n;
		cin >> x >> n;
		cout << power(x, n) << endl;
	}
	return 0;
}