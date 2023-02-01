#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[100], i, sum=0, sum1=0;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }

    sort(a, a+n, greater<int>());

    sum=sum/2;

    for(i=0; i<n; i++)
    {
        sum1=sum1+a[i];
        if(sum1>sum)
        {
            cout<<i+1<<endl;
            goto shes;
        }
    }

    shes:

    return 0;
}
