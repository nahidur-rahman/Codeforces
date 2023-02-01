#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i;

    cin>>n;

    if(n%2==0)
    {
        k=n/2;
        i=1;
        cout<<k<<endl;
    }

    else
    {
        k=(n-3)/2;
        i=0;
        cout<<k+1<<endl;
    }

    for(i; i<k; i++)
        cout<<2<<" ";
    if(n%2==0)
        cout<<2<<endl;
    else
        cout<<3<<endl;

    return 0;
}
