#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i, t, ti=0, temp=0;

    cin>>n>>k;

    t=240-k;

    for(i=1; i<=n; i++)
    {
        ti=ti+(i*5);
        if(ti<=t)
            temp++;
        else
            break;
    }

    cout<<temp<<endl;

    return 0;
}
