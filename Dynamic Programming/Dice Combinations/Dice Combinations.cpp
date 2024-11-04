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
    ll n;
    cin>>n;
    vector<ll> dp(n+20, 0);
    dp[0]=1;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=6;j++){
            dp[i+j] = (dp[i+j]%mod+dp[i]%mod)%mod;
        }
    }
    cout<<dp[n]<<ENDL;
}