#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

#define INF 2e9

#define ALL(v) v.begin(), v.end()

typedef long long ll;

int main(void){
    //入力
    int a, b;
    std::cin >> a >> b;
    int ans = 0;
    int quotient = 0;
    REP(i, INF)
    {
        if (a>b)
        {
            quotient = a/b;
            a = a%b;
        }
        else
        {
            quotient = b/a;
            b = b%a;
        }

        ans = ans + quotient;

        if(a == b){
            printf("%d",ans-1);
            break;
        }
    }
    
    return 0;
}