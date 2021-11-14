#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

vector<vector<int>> prt(int n, int st = 2)
{
    int sq = sqrt(n);
    vector<vector<int>> a;
    for (int i = st; i <= sq; ++i)
    {
        if (n%i == 0) {
            vector<vector<int>> p = prt(n/i, i);
            for (int j = 0; j < p.size(); ++j) {
                vector<int> t(1, i);
                t.insert(t.end(), p[j].begin(), p[j].end());
                a.push_back(t);
            }
        }
    }
    a.push_back(vector<int>(1, n));
    
    return a;
}

int main()
{
    int t; cin >> t;
    while (t --) {
        int n;
        cin >> n;
        vector<vector<int>> a = prt(n);
        cout << a.size() -1 << endl;
        for (int i = 0; i < a.size()-1; ++i) {
            for (int j = 0; j < a[i].size(); ++j)
            {
                cout << a[i][j];
                if (j != a[i].size()-1)
                    cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}