#include<bits/stdc++.h>

using namespace std;
bool snt(unsigned long long n)
{
	if(n<2)
	return false;
	if(n%2==0 || n%3==0)
	{
		return false;
	}
	for(int i=5; i<=sqrt(n); i+=6)
	{
		if(n%i==0 || n%(i-4)==0)
		return false;
	}
	return true;
}
void result(unsigned long long n)
{
	if(n==1)
	cout << 1<< endl;
	if(snt(n)==true)
	cout << n << endl;
	else{
	long long result;
	while(n%2==0)
	{
		result = 2;
		n/=2;
	}
	for(long long i=3; i<=sqrt(n); i+=2)
	{
		while(n%i==0)
		{
			if(snt(i)==true)
			result = i;
			n/=i;
		}
	}
	if(n>result)
	result = n;
	cout << result << endl;
}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned long long n;
		cin >> n;
		result(n);
	}
	return 0;
}
