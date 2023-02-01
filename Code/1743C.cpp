#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        string s;
        cin>>s;
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++){
                if(s[i]==1)
                continue;
            else if(i+2<n && s[i+1]==1 && s[i+2]==0 && a[i]>=a[i+1]){
                s[i]=1;
                s[i+1]=0;
            }
            else if(i+2<n && s[i+1]==1 && s[i+2]==1 && a[i]>=a[i+1] && a[i]>=a[i+2]){
                s[i]=1;
                s[i+1]=0;
            }
        }
        int sum=0;
        for(int i=0; i<n; i++){
            if(s[i]==1)
                sum+=a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
