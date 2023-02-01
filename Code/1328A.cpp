#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, a, b, div, mov, mod;

    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        div=a/b;
        mod=a%b;

        if(mod!=0)
        {
            mov=((b*(div+1))-a);
            cout<<mov<<endl;
        }
        else
            cout<<0<<endl;

    }


    return 0;
}
