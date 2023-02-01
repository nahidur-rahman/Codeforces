#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b, mn=1e8, cnt;
    cin>>n>>m>>a>>b;
    mn=min(mn, (n*a));
    if(n%m==0){
        cnt=n/m;
        mn=min(mn, (cnt*b));
    }
    else{
        cnt=n/m;
        mn=min(mn, ((cnt*b)+((n-(cnt*m))*a)));
        cnt=n/m;
        cnt++;
        mn=min(mn, (cnt*b));
    }
    cout<<mn<<endl;
    return 0;
}
