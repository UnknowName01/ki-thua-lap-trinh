#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long check(vector<long> v, int s)
{
    sort(v.begin(), v.end());
    if (v[0] != s) return s;
    s = 1;
    while (s < v.size())
    {
        if (v[s] - v[s-1] != 1) break;
        ++s;
    }
    return v[s-1]+1;
}

int main()
{
    int n;
    vector<long> rel;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int m, s;
        cin >> m >> s;
        vector<long> ip;
        --m;
        for (int i = 0; i < m; ++i)
        {
            long t;
            cin >> t;
            ip.push_back(t);
        }
        rel.push_back(check(ip, s));
    }
    for (int i = 0; i < rel.size(); ++i)
    {
        cout << rel[i] << endl;
    }
}