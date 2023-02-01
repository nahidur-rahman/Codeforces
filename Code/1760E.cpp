#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1], cnt2=0, cnt0=0, cnt1=0, z=0, flag=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            if(a[i]==0)
                continue;
            for(int j=i+1; j<n; j++){
                if(a[j]==0)
                    cnt0++;
            }
        }

        for(int i=0; i<n; i++)
            if(a[i]==0){
                a[i]=1;
                z=i;
                flag=1;
                break;
            }
        for(int i=0; i<n; i++){
            if(a[i]==0)
                continue;
            for(int j=i+1; j<n; j++){
                if(a[j]==0)
                    cnt1++;
            }
        }
        if(flag)
            a[z]=0;
        for(int i=n-1; i>=0; i--)
            if(a[i]==1){
                a[i]=0;
                break;
            }
        for(int i=0; i<n; i++){
            if(a[i]==0)
                continue;
            for(int j=i+1; j<n; j++){
                if(a[j]==0)
                    cnt2++;
            }
        }

        int mx=max(cnt0, max(cnt1, cnt2));
        cout<<mx<<endl;
    }
    return 0;
}
