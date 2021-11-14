// UOCSO001 - Tổng các ước số
#include <iostream>
#include <math.h>
using namespace std;
long tonguoc(long a)
{
    long save = 0; // luu cac uoc theo 2 chieu
    if(a == 1)		// uoc 1 khong nho hon chinh no nen return 0
        return 0;
    for(long i = 2; i <= a/i; i++)
    {
        if(a%i == 0)
        {
            save += i + a/i;
            if (i == a/i)
            {
                save -= i;
            }
        }
    }
    return save + 1;
}
int main()
{
    int test;
    long n;
    cin >> test;
    while(test --)
    {
        cin >> n;
        cout << tonguoc(n) << endl;
    }
    return 0;
}