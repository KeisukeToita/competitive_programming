#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

#define INF 2e9

#define ALL(v) v.begin(), v.end()

using namespace std;
typedef long long ll;

int main() {
    // 入力の読み込み
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int Q;
    cin >> Q;
    vector<int> B(Q);
    for (int i = 0; i < Q; ++i) {
        cin >> B[i];
    }

    // クラスのレーティングをソート
    sort(A.begin(), A.end());

    // 各生徒の不満度を計算
    for (int i = 0; i < Q; ++i) {
        int b = B[i];

        // 二分探索で最も近いクラスのレーティングを探す
        auto it = lower_bound(A.begin(), A.end(), b);

        int min_diff = INT_MAX;
        if (it != A.end()) {
            min_diff = min(min_diff, abs(*it - b));
        }
        if (it != A.begin()) {
            min_diff = min(min_diff, abs(*(it - 1) - b));
        }

        // 結果を出力
        cout << min_diff << endl;
    }

    return 0;
}