#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[105], mxp, mnp, mx=-1, mn=1e8, ans=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]>mx){
            mx=a[i];
            mxp=i;
            //cout<<"mx >>"<<i<<"__"<<mx<<"___"<<mxp<<endl;
        }
        if(a[i]<=mn){
            mn=a[i];
            mnp=i;
            //cout<<"mn >>"<<i<<"__"<<mn<<"___"<<mnp<<endl;
        }
        //cout<<endl;
    }
    if(mxp<mnp){
        ans=(mxp-1)+(n-mnp);
    }
    if(mxp>mnp){
        ans=(mxp-1)+(n-mnp)-1;
    }
    cout<<ans<<endl;
    return 0;
}
