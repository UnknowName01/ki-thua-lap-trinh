// UOCSO002 - Ước số nguyên tố
#include <iostream>
#include <math.h>
using namespace std;
long snt(long a)
{
    int save = 0;
    if (a == 1)	return 0;
    for(long i = 2; i <= sqrt(a); i ++)
        if(a%i == 0) return 0;
	return 1;
}
void result(long a)
{
    long save = 0; // luu cac uoc theo 2 chieu
    for(long i = 1; i <= a/i; i++)
    {
        if(a%i == 0)
        {
            if(snt(i) == 1) save ++;
            if(snt(a/i) == 1)
            {
                save ++;
                if(i == a/i) save --;
            }
        }
    }
    cout << save << endl;
    
}
int main()
{
    int test;
    long n;
    cin >> test;
    while(test --)
    {
        cin >> n;
        result(n);
    }
    return 0;
}