// AC獲得
#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

#define INF 2e9

#define ALL(v) v.begin(), v.end()

using namespace std;
typedef long long ll;


int main(){

    ll H, W;

    ll tmp;

    cin >> H >> W;

    vector<vector<int>> A(H, vector<int>(W, 0));

    vector<int> tate(H, 0);
    vector<int> yoko(W, 0);

    REP(i, H){
        REP(j, W){
            cin >> tmp;
            tate.at(i) = tate.at(i) + tmp;
            yoko.at(j) = yoko.at(j) + tmp;
            A.at(i).at(j) = tmp;
        }
    }

    REP(i, H){
        REP(j, W){
            cout << tate.at(i)+yoko.at(j)-A.at(i).at(j) << " ";
        }
        cout << endl;
    }
}