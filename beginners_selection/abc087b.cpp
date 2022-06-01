#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

#define INF 2e9

#define ALL(v) v.begin(), v.end()

using namespace std;
typedef long long ll;

int main(){
    int A,B,C,X;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> X;

    int res = 0;
    for (int a = 0; a <= A; ++a)
    {
        for (int b = 0; b <= B; ++b)
        {
            for (int c = 0; c <= C; ++c)
            {
                int total = 500*a + 100*b + 50*c;
                if(total == X)++res;
            }
        }
    }
    cout << res << endl;

    return 0;
}