#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, t, ans;

    cin>>t;

    while(t--)
    {
        cin>>n;

        if(n==1 || n==2)
            ans=0;
        else if(n%2!=0)
            ans=(n-1)/2;
        else
            ans=(n-2)/2;

        cout<<ans<<endl;
    }

    return 0;
}
