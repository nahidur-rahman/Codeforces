#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w, sum=0, i, borrow;

    cin>>k>>n>>w;

    for(i=1; i<=w; i++)
        sum=sum+(i*k);

    borrow=sum-n;

    if(borrow>0)
        cout<<borrow<<endl;
    else
        cout<<"0"<<endl;


    return 0;
}
