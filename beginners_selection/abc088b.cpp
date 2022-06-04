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
    cin >> N;
    
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    

    int a_sum = 0;
    int b_sum = 0;

    for(int i = 0; i<N ;i++){
        auto max_itr = max_element(a.begin(), a.end());
        if (i%2==0){//Alice
            a_sum += *max_itr;
        }else{//Bob
            b_sum += *max_itr;
        }
        *max_itr = 0;
    }

    cout << a_sum - b_sum << endl;
    return 0;
}