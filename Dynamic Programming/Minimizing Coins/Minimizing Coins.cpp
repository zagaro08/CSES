#include<bits/stdc++.h>
/**zagaro & lauren <3**/
#define mod 1000000007 //1e9 + 7
#define pi acos(-1)
#define wl while
#define str string
#define ENDL "\n"
#define sal ' '
#define prc(n) cout.precision(n);cout<<fixed;
typedef long long ll;
typedef bool bl;
typedef char car;
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n, x;
    cin>>n>>x;
    vector<ll> vec(n+1);
    for(int i=1;i<=n;i++)cin>>vec[i];
    vector<ll> dp(x+1e6+100, LONG_MAX);
    dp[0]=0;
    for(int i=0;i<=x;i++){
        if(dp[i] != LONG_MAX){
            for(int j=1;j<=n;j++){
                dp[i+vec[j]] = min(dp[i+vec[j]], dp[i]+1);
            }
        }
    }
    if(dp[x] == LONG_MAX)cout<<-1<<ENDL;
    else cout<<dp[x];
}