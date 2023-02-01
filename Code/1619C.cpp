#include<bits/stdc++.h>
#define el "\n"
#define ll long long
#define pb push_back
using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--){
       ll a,s;
       cin>>a>>s;
       ll x=a,y=s;
       vector<int>ans;
       while(s || a){
            if(s%10>=a%10) ans.pb((s%10)-(a%10)), s/=10, a/=10;
            else ans.pb((s%100)-(a%10)), s/=100, a/=10;
       }
        a=x,s=y;
       ll n=ans.size(),anss=0;
       for(int i=n-1;i>=0;i--){
        anss=anss*10+ans[i];
       }

       ans.clear();
        y=anss;
       ll ck=0,c=0;
       if(anss<0) c=1;
       else{
        while(a || anss){
            ans.pb((a%10)+(anss%10));
            a/=10;
            anss/=10;
        }
        for(int i=n-1;i>=0;i--){
            if(ans[i]>=10) ck=ck*100+ans[i];
            else ck=ck*10+ans[i];
        }
       }
       if(c || ck!=s) cout<<-1<<el;
       else cout<<y<<el;

    }
}
