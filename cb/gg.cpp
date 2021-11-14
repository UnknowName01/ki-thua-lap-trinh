#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int sort_fun(string a, string b)
{
    int x = a.length();
    if (x < b.length()) x = b.length();
    a += string(x-a.length(), '0');
    b += string(x-b.length(), '0');
    return (a > b);
}

int main()
{
    
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        string s[m];
        long a;
        for (int i = 0; i < m; ++i) {
            cin >> a;
            s[i] << a;
        }
        
        for (int i = 0; i < m; ++i) {
            cout << s[i];
        }
        cout << endl;
    }
    
}