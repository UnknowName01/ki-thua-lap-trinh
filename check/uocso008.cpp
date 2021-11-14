#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > ketqua;

void dequy(int i, int s, int n, vector<int> x)
{
	if(i>n || s>n)
	return;
	if(s==n){
	ketqua.push_back(x);
	return;
}
	for(int k=i; k<n; k++)
	{
		if(s*k > n)
		return;
		if(n%k==0){
			x.push_back(k);
			// lay k roi thi phai nhan k vao s
			dequy(k,s*k,n,x);
			// lay phan tu vao roi thi day phan tu 0 o dau ra de 
			// ko bi sai kich thuoc mang
			x.pop_back();
		}
	}
}
void phantich(int n)
{
	vector <int> x;
	x.clear();
	dequy(2,1,n,x);
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		// khoi tao
		ketqua.clear();
		// tim nghiem va luu vao ket qua
		phantich(n);
		// Hien thi
		cout << ketqua.size() << endl;
		for(int i=0; i<ketqua.size(); i++)
		{
			for(int j=0; j<ketqua[i].size(); j++)
			{
				cout << ketqua[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}