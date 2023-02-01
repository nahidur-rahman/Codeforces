#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string s, s1="";
        cin>>n;
        int a[n+1], vis[n+1];
        char ch[n+1];
        for(int i=0; i<n; i++){
            cin>>a[i];
            vis[i]=0;
        }
        cin>>s;
        for(int i=0; i<n; i++){
            int temp=a[i];
            if(vis[i]==0){
                for(int j=i; j<n; j++){
                    if(a[j]==temp){
                        vis[j]=1;
                        ch[j]=s[i];
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            s1=s1+ch[i];
        }
        if(s==s1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
