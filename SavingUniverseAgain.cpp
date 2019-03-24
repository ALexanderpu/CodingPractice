#include <bits/stdc++.h>
using namespace std;
#define filein freopen("A-small-attempt0.in", "r", stdin);
#define fileout freopen("a.out", "w", stdout);
#define sd(x) scanf("%d",&x)
#define rep(i , j , n) for(ll i = j ; i <= n ; i++)
#define ll long long

ll damage(const string& s){
  ll dmg = 0;
  ll charge = 1;
  for(auto& c: s){
    if(c == 'S') dmg += charge;
    else charge *= 2;
  }
  return dmg;
}

void solve(int tc){
    ll d; string p; 
    cin >> d >> p;
    
    // swapping two adjacent instructions, only way to minimize damage is swap CS,  (SC will increase, SS, CC no change)
    // check CS at the rightmost end and swap, cnt it!
    int ans = 0;
    while(damage(p) > d){
        bool swapped = false;
        for(int cur = p.size() - 2; cur >= 0; cur--){
            if(p[cur] == 'C'  && p[cur+1] == 'S'){
                ans++;
                p[cur] = 'S';
                p[cur+1] = 'C';
                swapped = true;
                break;
            }
        }
        if(!swapped) break; // no CS found, cannot swap
    }
    if(damage(p) > d) cout << "Case #" << tc <<": IMPOSSIBLE"<< endl;
    else cout << "Case #" << tc <<": " << ans << endl;
}


int main(){
    int kase;
    sd(kase);
    rep(tc, 1, kase){
        solve(tc);
    }
    return 0;
}
