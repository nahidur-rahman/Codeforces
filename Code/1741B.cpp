#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,cnt=0;
        cin>>n;
        if(n==3){
            cout<<-1<<endl;
            continue;
        }
        if(n%2==0)
            m=n/2;
        else
            m=(n/2)+1;
        for(int i=n; i>m; i--){
            cout<<i<<" ";
            cnt++;
        }
        for(int i=1; i<=m; i++){
            cout<<i;
            cnt++;
            if(cnt!=n)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
