#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

#define INF 2e9

#define ALL(v) v.begin(), v.end()

using namespace std;
typedef long long ll;

int main(void){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(m);
    vector<vector<int>> idx(n);
    vector<int> cnt(m);
    for (int i = 0; i < m; ++i) {
        int k;
        cin >> k;
        cnt[i] = k;
        a[i].resize(k);
        for (auto &e : a[i]) {
            cin >> e, e--;
            idx[e].push_back(i);
        }
    }
    int ans = 0;

    
}