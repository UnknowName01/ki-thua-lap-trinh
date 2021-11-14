
//UOCSO005 - Phân tích số
#include <bits/stdc++.h>
using namespace std;

//snt
bool snt(long long n)
{
    if(n == 1)
        return false;
    for(long long i = 2; i <= sqrt(n); i ++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

//
void result(long long n)
{
    //Ham
    int count = 0, value = 0;
    long long a[100], j = 0;   //a luu snt, b luu so lan xuat hien
    
    //i xet tai 2
    if(n % 2 == 0)
    {
        value ++;
        while(n%2==0)
	    {
		    n/=2;
		    count++;
	    }
        a[j++] = 2;
        a[j++] = count;
    }

    //i xet tu 3 i tang 2 don vi 
        for(long long i = 3; i <= sqrt(n); i += 2)
        {
            count = 0;
            while(n%i==0)
            {
                n = n/i;
                count++;
            }
            if(count >0)
            {
                value++;
                a[j++]=i;
                a[j++]=count;
            }
        }
        if(n != 1)
        {
            value ++;
            a[j++] = n;
            a[j++] = 1;
        }

        //in
        cout << value << endl;
        for(int i = 0; i < j; i += 2)
        {
            cout << a[i] << " " << a[i+1] << endl;
        }
}
int main()
{
    int test;
	cin >> test;
	while(test--)
	{
		long long n;
		cin >> n;
		result(n);
	}
	return 0;
}