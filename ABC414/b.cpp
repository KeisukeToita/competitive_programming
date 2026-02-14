#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

#define INF 2e9

#define ALL(v) v.begin(), v.end()

using namespace std;
typedef long long ll;

int main(void){
    string ans;
    int N;
    cin >> N;
    char c;
    int l;
    int length = 0;
    for (size_t i = 0; i < N; i++)
    {
        cin >> c >> l;
        length += l;
        if (length > 100){
            cout << "Too Long" << endl;
            return 0;
        }
        for (int j = 0; j < l; j++)
        {
            ans += c;
        }

    }

    cout << ans << endl;
    return 0;
}