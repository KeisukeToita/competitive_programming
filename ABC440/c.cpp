#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

#define INF 2e9

#define ALL(v) v.begin(), v.end()

using namespace std;
typedef long long ll;

int main(void){
    int T;
    cin >> T;
    REP(t, T){
        ll answer = INF;
        int N, W;
        cin >> N >> W;
        vector<int> C(2*W, 0);
        int c;
        REP(i, N){
            cin >> c;
            C[i%(2*W)] += c;
        }

        //solve
        int answer_candidate;
        REP(i, 2*W){
        answer_candidate += C[i];
            if(i > W){
                answer_candidate -= C[i - W];
                if(answer > answer_candidate){
                    answer = answer_candidate;
                }
            }
        }

        cout << answers[i] << endl;
    }

    return 0;
}