#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

#define INF 2e9

#define ALL(v) v.begin(), v.end()

using namespace std;
typedef long long ll;

int main(void){
    int N;
    cin >> N;
    vector<pair<int, int>> T;
    int time;
    for (int i = 0; i < N; i++)
    {
        cin >> time;
        T.push_back({time, i});
    }
    sort(T.begin(), T.end());
    for (size_t i = 0; i < 3; i++){
        cout << T[i].second + 1 << " ";
    }
    return 0;
}