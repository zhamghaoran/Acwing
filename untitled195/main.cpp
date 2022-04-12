#include <bits/stdc++.h>
using namespace std;
int a;
int val[100010];
int sum[100010];
int b;
int main() {
    cin>>a>>b;
    for(int i = 1;i <= a;i ++)
        scanf("%d",&val[i]);
    sort(val + 1,val + 1 + a);
    int ans = 0;
    for(int i = 1;i <= a; i ++) {
        int now = i;
        int st = 1;
        while (st && now + st <= a) {
            if(val[now + st] - val[i] <= b) {
                st <<= 1;
                if(st + now > a) {
                    now += st / 2;
                    st = 1;
                }
            }
            else {
                if(st == 1)
                    break;
                now += st / 2;
                st = 1;
            }

        }
        ans = max(ans,now - i + 1);
    }
    cout<<ans;
    return 0;
}
