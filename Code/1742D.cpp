#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, ans=0;
        cin>>n;
        int a[n+1];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=n-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                int x=__gcd(a[i],a[j]);
                if(x==1){
                    ans=max(ans, i+j+2);
                    //cout<<(i+j+2)<<"\n";
                    //flag=0;
                    //break;
                }
            }
            //if(flag==0)
                //break;
        }
        if(ans==0)
            cout<<-1<<"\n";
        else
            cout<<ans<<"\n";
    }
    return 0;
}
