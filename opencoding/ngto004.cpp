//NGTO004 - Ước nguyên tố lớn nhất
#include <bits/stdc++.h>
using namespace std;

//
void result(unsigned long long n)
{
	unsigned long long i;
    //i xet tai 2
    while(n % 2 == 0)
		n /= 2;

    for(i = 3; i <= sqrt(n); i += 2)
    {
        while(n%i==0)
        {
            n = n/i;
        }
    }

    //in
    if(n == 1) cout << i - 2 << endl;
	else cout << n << endl;
}
int main()
{
    int test;
	cin >> test;
	while(test--)
	{
		unsigned long long n;
		cin >> n;
		result(n);
	}
	return 0;
}