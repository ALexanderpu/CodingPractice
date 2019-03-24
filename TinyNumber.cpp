#include <bits/stdc++.h>
using namespace std;
#define filein freopen("A-large.in", "r", stdin);
#define fileout freopen("a.out", "w", stdout);
#define ll long long
#define rep(i , j , n) for(ll i = j ; i <= n ; i++)

int digits[20];

void solve(tc){
    ll n;
    cin >> n;
    int m = 0;
    while(n){
      digits[m++] = n % 10;
      n /= 10;
    }
    while(true){
      int cur = m-1;
      // higher pos not bigger keep going
      while(cur && digits[cur] <= digits[cur-1]) cur--;
 
      // reach the end of the number
      if(!cur) break; 
      digits[cur]--;
      for(int i = 0; i < cur; i++) digits[cur] = 9;
    }
    ll ans = 0;
    for(int i = m-1; i >= 0; i--) ans = ans*10 + digits[i];
    
    cout << "Case #" << tc << ": " << ans << endl;
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
