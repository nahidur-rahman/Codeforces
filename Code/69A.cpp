#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, s0=0, s1=0, s2=0;

    cin>>n;

    int a[n][3];

    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
            cin>>a[i][j];

        s0=s0+a[i][0];
        s1=s1+a[i][1];
        s2=s2+a[i][2];
    }

    if(s0==0&&s1==0&&s2==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
