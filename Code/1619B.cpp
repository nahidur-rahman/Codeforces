#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int ans=0;
        set<int>s;
        ll l1=sqrt(n)+1;
        for(ll i=1;i<=l1;i++){
            if((i*i)<=n)
                s.insert(i*i);
            if((i*i*i)<=n)
                s.insert(i*i*i);
        }
        cout<<s.size()<<endl;
    }
    return 0;
}
