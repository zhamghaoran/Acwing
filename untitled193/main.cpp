#include <bits/stdc++.h>
using namespace std;
int dp[100100];
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    dp[a] = dp[b] = 1;
    for(int i = min(a,b);i <= c;i ++) {
        if(dp[i])
            dp[i + a] = 1,dp[i + b] = 1;
    }
    dp[0] = 1;
    for(int i = c;i >= 0;i --) {
    
        if(dp[i]) {
            cout<<i;
            return 0;
        }
    }
    return 0;
}
