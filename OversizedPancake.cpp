#include <bits/stdc++.h>
using namespace std;
#define filein freopen("A-large.in", "r", stdin);
#define fileout freopen("a.out", "w", stdout);
#define ll long long
#define rep(i , j , n) for(ll i = j ; i <= n ; i++)

void solve(tc){
    string s;
    int k;
    cin >> s >> k;
    int n = s.length(), ans = 0;
    for (int i = 0; i + k <= n; i++) { 
      if (s[i] == '+') continue;
      // flip '-' to '+' for continuous subarray
      for (int j = i; j < i + k; j++)
         s[j] = (s[j] == '+') ? '-' : '+';
         ans++;
    }
    bool flag = true;
    for (int i = 0; flag && i < n; i++)
	flag = (s[i] == '+');
      
    cout << "Case #" << tc << ": ";
    if (flag) cout << ans << endl;
    else cout << "IMPOSSIBLE"<< endl;
}

int main(){
    filein;
    fileout;
    int kase;
    cin >> kase;
    rep(tc, 1, kase){
        solve(tc);
    }
    return 0;
}
