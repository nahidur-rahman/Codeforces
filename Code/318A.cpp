#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k, mid, ans;

    cin>>n>>k;

    if(n%2==0)
        mid=n/2;
    else
        mid=(n/2)+1;

    if(k<=mid)
    {
        ans=(2*k)-1;
    }
    else
    {
        k=k-mid;
        ans=(2*k);
    }

    cout<<ans<<endl;

    return 0;
}
