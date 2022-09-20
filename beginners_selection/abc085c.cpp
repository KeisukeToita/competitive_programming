#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

#define INF 2e9

#define ALL(v) v.begin(), v.end()

using namespace std;
typedef long long ll;


int main(){
    ll N, Y;
    ll res10000=-1, res5000=-1, res1000=-1;

    cin >> N >> Y;
    for(int a=0; a<=N;a++){
        for(int b=0;b+a<=N;b++){
            int c = N - a + b;
            int total = 10000*a + 5000*b + 1000*c;
            if(total == Y){
                res10000 = a;
                res5000 = b;
                res1000 = c;
            }
        }
    }
    
    cout << res10000 << " " << res5000 << " " << res1000 << endl;
}