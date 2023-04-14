#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

#define INF 2e9

#define ALL(v) v.begin(), v.end()

using namespace std;
typedef long long ll;

int main(void){
    int N, D, ans;
    ans = -1;
    cin >> N >> D;
    vector<int> T(N);
    REP(i,N)cin >> T[i];
    REP(i, N-1){
        if(T[i+1] - T[i] <= D){
            ans = T[i+1];
            break;
        }
    }
    cout << ans;
    return 0;
}