#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

#define INF 2e9

#define ALL(v) v.begin(), v.end()

using namespace std;
typedef long long ll;

// product_j が product_i の上位互換か判定する
bool is_strictly_superior(const pair<int, vector<int>> &product_i, const pair<int, vector<int>> &product_j) {
    const auto&[price_i, feature_i]{product_i};
    const auto&[price_j, feature_j]{product_j};
    return price_i >= price_j &&
           includes(feature_j.begin(), feature_j.end(), feature_i.begin(), feature_i.end()) &&
           (price_i > price_j || !includes(feature_i.begin(), feature_i.end(), feature_j.begin(), feature_j.end()));
}
// products に上位互換の組があるか判定する
bool has_superior_pair(const vector<pair<int, vector<int>>> &products) {
    return any_of(products.begin(), products.end(), [&products](const auto &product_i) {
        return any_of(products.begin(), products.end(), [&product_i](const auto &product_j) {
            return is_strictly_superior(product_i, product_j);
        });
    });
}


int main(void){
    int N, M;
    cin >> N >> M;
    vector<pair<int, vector<int>>> products(N);

    for (auto&&[price, feature] : products) {
        cin >> price;
        int K;
        cin >> K;
        feature = vector<int>(K);
        for (auto &&f : feature) cin >> f;
    }
    cout << (has_superior_pair(products) ? "Yes" : "No") << endl;
    return 0;
}