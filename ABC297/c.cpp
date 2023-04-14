#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

#define INF 2e9

#define ALL(v) v.begin(), v.end()

using namespace std;
typedef long long ll;

int main(void){
    //入力
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    REP(i, H) cin >> S[i];
    REP(i, H){
        while(S[i].find("TT") != string::npos){
            int TTpos = S[i].find("TT");
            S[i].replace(TTpos, 2, "PC");
        }
    }

    REP(i, H) cout << S[i] << endl;
    return 0;
}