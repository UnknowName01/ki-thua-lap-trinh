#include<iostream>
#include<vector>
using namespace std;
const long long mod = 1e9 + 7;
vector<vector<int> > result;

int dequy(int i, int s, int n, vector<int> a)
{
	if(i > n || s > n) return result.size() % mod;

	if(s == n){
	    result.push_back(a);
	    return result.size() % mod;
    }

	for(int j = i; j < n; j ++)
	{
		if(s + j > n) return result.size() % mod;
		if(n - j > 0){
			a.push_back(j);
			dequy(j, s + j, n, a);
			a.pop_back();
		}
	}
	return result.size() % mod;
}

int main()
{
    vector <int> a;
	int test;
	cin >> test;
	while(test --)
    {
		int n;
		cin >> n;
        result.clear();
		cout << dequy(1,0,n,a) << endl; 
    }
}