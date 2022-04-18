#include <bits/stdc++.h>
using namespace std;
int b,maxx;
map<string ,int > qaq;
string faq[3],a;
int main() {
    cin>>b;
    for(int i = 1;i <= b;i ++) {
        cin>>faq[0]>>faq[1]>>faq[2];
        sort(faq,faq + 3);
        qaq[faq[0] + faq[1] + faq[2]] ++;
        maxx = max(maxx,qaq[faq[0] + faq[1] + faq[2]]);
    }
    cout<<maxx;
    return 0;
}