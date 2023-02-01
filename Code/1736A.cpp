#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n], b[n], ca=0, cb=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==1)
                ca++;
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
            if(b[i]==1)
                cb++;
        }
        if(ca==cb && ca==n){
            cout<<0<<endl;
            continue;
        }
        else if(ca==cb){
            cout<<1<<endl;
            continue;
        }
        ca=abs(ca-cb);
        cout<<ca+1<<endl;
    }
    return 0;
}
