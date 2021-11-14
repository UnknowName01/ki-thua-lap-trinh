// COBAN011 - Phép chia số lớn
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

// hàm để thực hiện phép chia các số lớn
void chia(string num, ll soChia)
{
    string p;
 
    // Tìm tiền tố của số lớn hơn số chia.
    ll idx = 0;
    int r=0;
    ll temp = num[idx] - '0';
    while (temp < soChia)
        temp = temp * 10 + (num[++idx] - '0');
 
    //  Lặp đi lặp lại số chia với tạm thời. 
    //  Cập nhật temp nếu nhiều hơn 1 chữ số.
    while (num.size() > idx) {
        // Lưu trữ kết quả trong câu trả lời tức là temp / sochia
        p += (temp / soChia) + '0';
        r= (temp % soChia);
        // Lấy chữ số tiếp theo của số 
        temp = (temp % soChia) * 10 + num[++idx] - '0';
        
    }
    // Nếu số chia lớn hơn num
    if (p.length() == 0){
        cout << "0";
    } else {
        // ngược lại trả về ans
    cout << p << " " << r;
    }    
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
        string a;
        ll b;
        cin >> a >> b;
        chia(a,b);
        cout << endl;
	}
	return 0;
}