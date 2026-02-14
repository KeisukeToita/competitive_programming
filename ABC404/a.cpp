#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

#define INF 2e9

#define ALL(v) v.begin(), v.end()

using namespace std;
typedef long long ll;

int main(void){
    string s;
    cin >> s;

    vector<int> alphabet;
    alphabet.resize(26, 0);

    for (int i = 0; i < s.size(); i++){
        alphabet[s[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        if (alphabet[i] == 0){
            cout << (char)(i + 'a') << endl;
            return 0;
        }
    }
    return 0;
}