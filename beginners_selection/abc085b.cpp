#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

#define INF 2e9

#define ALL(v) v.begin(), v.end()

using namespace std;
typedef long long ll;

int main(void){
    //入力部
    int N;
    cin >> N;
    vector<int> d(N);
    REP(i, N) cin >> d[i];

    //計算処理
    int ans = 0;
    int cur_min_mochi = 101;
    REP(i, N){
        auto max_itr = max_element(d.begin(), d.end());

        if(cur_min_mochi > *max_itr){
            ans++;
            cur_min_mochi = *max_itr;
        }
        *max_itr = 0;
    }

    //出力
    cout << ans << endl;

    return 0;
}