#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
void quaylui(int k, int n) {
    //In
    for (int i = 0; i < v.size() - 1; ++i){
        v[i] = v[i] + v[i+1];
        cout << v[i] << " ";
    }
    v.pop_back();
    cout << endl;
    if (k < n) {
        quaylui(k+1, n); 
    }
}
int main()
{
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int add;
        for (int i = 0; i < n; ++i){
            cin >> add;
            v.push_back(add);
        }
        quaylui(1, n);
    }
}