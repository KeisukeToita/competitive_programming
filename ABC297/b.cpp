#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

#define INF 2e9

#define ALL(v) v.begin(), v.end()

using namespace std;
typedef long long ll;

int main(void){
    string S;
    cin >> S;
    
    //条件1のチェック
    int bx = S.find_first_of('B');
    int by = S.find_last_of('B');
    if((bx+by)%2!=1){
        cout << "No";
        return 0;
    }
    //条件2のチェック
    int rx = S.find_first_of('R');
    int ry = S.find_last_of('R');
    int kx = S.find_first_of('K');
    if((rx < kx)&&(kx < ry)){
        cout << "Yes";
        return 0;
    }
    cout << "No";
    return 0;
}