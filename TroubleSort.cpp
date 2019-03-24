#include <bits/stdc++.h>
using namespace std;
#define filein freopen("A-small-attempt0.in", "r", stdin);
#define fileout freopen("a.out", "w", stdout);
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define pll pair<long long ,long long >
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define INF 1e18
#define eps 0.00001
#define rep(i , j , n) for(ll i = j ; i <= n ; i++)
#define per(i , j , n) for(ll i = j ; i >= n ; i--)

void solve(int tc){
    int ans = 0;
    int n;
    sd(n);
    vector<int> odd(n/2);
    vector<int> even((n+1)/2);
    int odd_i = 0, even_i = 0;
    for(int i = 0; i < n; i++){
        if(i%2) sd(odd[odd_i++]);
        else sd(even[even_i++]);
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    vector<int> arr(n);
    odd_i = 0; even_i = 0;
    for(int i = 0; i < n; i++){
        if(i%2) arr[i] = odd[odd_i++];
        else arr[i] = even[even_i++];
    }
    bool flag = false;
    for(int i = 1; i < n && !flag; i++){
        if(arr[i] < arr[i-1]){
            flag = true;
            ans = i-1;
        }
    }
    if(flag) printf("Case #%d: %d\n", tc, ans);
    else printf("Case #%d: OK\n", tc);
}
int main(){
    filein;
    fileout;
    int kase;
    sd(kase);
    rep(tc, 1, kase){
        solve(tc);
    }
    return 0;
}
