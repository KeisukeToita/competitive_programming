#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

#define INF 2e9

#define ALL(v) v.begin(), v.end()

using namespace std;
typedef long long ll;

int findSumOfDigits(int n){
    int sum = 0;
    while (n>0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    ll N,A,B;
    cin >> N >> A >> B;
    
    int res = 0;

    for (int n = 1; n <= N; n++)
    {
        int sum = findSumOfDigits(n);
        if(sum >= A && sum <= B){
            res += n;
        }
    }
    
    cout << res << endl;

    return 0;
}