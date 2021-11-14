// LUYTHUA001 - Tính luỹ thừa a mũ n
#include"iostream"
#include"math.h"
#include"iomanip"
using namespace std;

void result(long long a, int n)
{
   int arr[1000];
   int m = 1, nho = 0, luu;
   arr[0] = 1;
   for(int i = 1; i <= n; i ++)
   {
      for(int j = 0; j < m; j ++)
      {
         luu = nho;
         nho = (arr[j]*a + nho)/10;
         arr[j] = (arr[j]*a + luu)%10;
      }
      while(nho > 0)
      {
         arr[m++] = nho%10;
         nho /= 10;
      }
   }
   for(int i = m-1; i >= 0; i --)
   {
      cout << arr[i];
   }
}

int main(){
	int t;
	cin >> t;
	while(t--)
   {
      long long a;
      int n;
      cin >> a >> n;
      result(a ,n);
      cout << endl;
   }
	return 0;
}