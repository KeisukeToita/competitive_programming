#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

#define INF 2e9

#define ALL(v) v.begin(), v.end()

using namespace std;
typedef long long ll;

int change_count(vector<vector<int>> &v, vector<vector<int>> &v2, int n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (v[i][j] == 1 && v2[i][j] == 0){
                ans++;
            }else if (v[i][j] == 0 && v2[i][j] == 1){
                ans++;
            }
        }
    }
    return ans;
}

vector<vector<int>> rotate_(vector<vector<int>> &v, int n){
    vector<vector<int>> result(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            result[j][n - 1 - i] = v[i][j];
        }
    }
    return result;
}

int main(void){
    int N;
    cin >> N;
    char c;
    vector<vector<int>> v(N, vector<int>(N, 0));
    vector<vector<int>> v2(N, vector<int>(N, 0));
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> c;
            if (c == '#'){
                v[i][j] = 1;
            }else{
                v[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> c;
            if (c == '#'){
                v2[i][j] = 1;
            }else{
                v2[i][j] = 0;
            }
        }
    }
    vector<int> ans(4, 0);

    for(int i = 0; i < 4; i++){
        ans[i] = change_count(v, v2, N)+i;
        v = rotate_(v, N);
    }

    cout << *min_element(begin(ans), end(ans)) << endl;
    return 0;
}