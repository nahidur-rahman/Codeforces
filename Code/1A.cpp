#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int m, n, a, col1, col2, row1, row2, ans;

    cin>>n>>m>>a;

    col1=m/a;
    col2=m%a;

    if(col2!=0)
        col1=col1+1;

    row1=n/a;
    row2=n%a;

    if(row2!=0)
        row1=row1+1;

    ans=col1*row1;

    cout<<ans<<endl;


    return 0;
}
