#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int main() {
    cin>>a>>b>>c;
    int minn = 0x3f3f3f3f;
    int x,y;
    int faq;
    for(int i = 1;i <= c;i ++) {
        cin>>x>>y;
        bool cmp = false;
        for(int j = 1;j <= y;j ++) {
            cin>>faq;
            if(faq == a)
                cmp = 1;
            if(faq == b && cmp)
                minn = min(minn,x);
        }
    }
    if(minn < 0x3f3f3f3f)
        cout<<minn;
    else
        cout<<-1;
}