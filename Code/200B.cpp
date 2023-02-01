#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    double ans, sum=0.0;

    cin>>n;

    float a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }

    ans=(sum/n);

    cout<<fixed<<setprecision(12)<<ans<<endl;

    return 0;
}
