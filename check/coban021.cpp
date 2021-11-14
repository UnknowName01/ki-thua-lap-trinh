//COBAN021 - Số có hai chữ số A và B
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define MAX 1000000000000000001

ull Dequy(ull result, short x, int xcount, short y, int ycount, ull n, int sochuso)
{
	if(xcount + ycount > sochuso + 2 || result > MAX)
	{
		return MAX;
	}
	if(xcount == ycount && result >=n)
	{
		return result;
	}
	
	return min(Dequy(result*10+x,x, xcount+1, y, ycount,n,sochuso),
			Dequy(result*10+y,x, xcount, y, ycount+1,n,sochuso));
}
ull findnumber(ull n, short x, short y)
{
	int sochuso = floor(log10(n)) + 1; // so chu so cua n
	ull result = 0; // so can tim
	int xcount = 0; // so chu so x
	int ycount = 0; // so chu so y
	
	if(x==y)
	{
		while(result<n)
		{
			result = result * 10 + x;
		}
		return result;
	}
	return Dequy(result,x,xcount,y,ycount,n,sochuso);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ull n;
		cin >> n;
		short x,y;
		cin >> x >> y;
		cout << findnumber(n,x,y) << endl;
	}
	return 0;
}

//
/*
#include <bits/stdc++.h>
using namespace std;
long long max(int x, int y, int n)
{
	long long count = 0;
	for(int i = 0; i < n; ++ i) {
		if(i < n/2) count = 10*count + max(x, y);
		else count = 10*count + min(x, y);
	}
	return count;
}
void result(int x, int y, long long n)
{
	string s;
	s = to_string(n);
	int a = s.length(), dem = a/2;
	if(a & 1 != 0) {
		a += 1;
		for(int i = 0; i < a/2; i++) cout << min(x,y);
		for(int i = 0; i < a/2; i++) cout << max(x,y);
		cout << endl;
	} else {
		if(n > max(x, y, a)) {
			for(int i = 0; i < a/2+1; i++) cout << min(x,y);
			for(int i = 0; i < a/2+1; i++) cout << max(x,y);
			cout << endl;
		} else {
			for(int i = 0; i < a; ++i) {
				if((int)s[i] - '0' <= min(x,y)) {
					if(dem != 0) {
						-- dem;
						cout << min(x,y);
					} else {
						cout << max(x,y);
					}
				} else {
					cout << max(x,y); 
				}
			}
			cout << endl;
		}
	}
	
}
int main() 
{
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		int x, y; cin >> x >> y;
		result(x, y, n);
	}
	return 0;
}
*/