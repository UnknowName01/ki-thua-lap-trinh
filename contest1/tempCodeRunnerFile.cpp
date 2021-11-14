//COBAN024 - Đổi tiền xu
//quy hoach dong
#include <bits/stdc++.h>
using namespace std;

int result(int a[], int m, int n)
{
	//n la tong tien
	//m la so loai tien
	//a[] la cac loai tien

	// Neu n bang 0 return 1
	if (n == 0)
		return 1;
	// Neu n < 0 return 0
	if(n < 0)
		return 0;

	// Het xu va n >0 thi tra ve 0
	if (m <= 0 && n >= 1)
		return 0;

	// Dem so cach doi
	return result(a, m - 1, n) + result(a, m, n - a[m - 1]);
}

int main()
{
		int n;
		cin >> n;
		int m;
		cin >> m;
		int a[m];
		for(int i=0; i<m; i++)
		{
			cin >> a[i];
		}
		cout << result(a,m,n);
	return 0;
}




//kdslfjldsj


//sdfdlsf



