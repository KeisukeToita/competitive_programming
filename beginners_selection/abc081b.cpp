//SHIFT ONLY
#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

#define INF 2e9

#define ALL(v) v.begin(), v.end()

using namespace std;
typedef long long ll;

int main(){
    int N;
    vector<ll> A(N);
    cin >> N;
    REP(i, N) cin >> A[i];

    int res = 0;

    //操作ができる限り繰り返す
    while (true)
    {
        bool exist_odd = false;
        REP(i, N){
            if (A[i] % 2 != 0) 
            {
                exist_odd = true;
            }
        }

        if (exist_odd == true)
        {
            break;
        }

        REP(i, N){
            A[i] /= 2;
        }

        ++res;
        
    }
    
    cout << res << endl;

    return 0;
}