#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

#define INF 2e9

#define ALL(v) v.begin(), v.end()

using namespace std;
typedef long long ll;

int main(void){
    queue<int> X;
    int Q_num;
    cin >> Q_num;
    int q;
    for(int i = 0; i < Q_num; i++){
        cin >> q;
        if(q == 1){
            int x;
            cin >> x;
            X.push(x);
        }else if(q== 2){
            cout << X.front() << endl;
            X.pop();
        }
    }

    return 0;
}