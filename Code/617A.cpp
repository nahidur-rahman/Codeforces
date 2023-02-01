#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, d5d, d5m, d4d, d4m, d3d, d3m, d2d, d2m, d1d, d1m, sum;

    cin>>x;

    d5d=x/5;
    d5m=x%5;

    d4d=d5m/4;
    d4m=d5m%4;

    d3d=d4m/3;
    d3m=d4m%3;

    d2d=d3m/2;
    d2m=d3m%2;

    d1d=d2m/1;

    sum=d5d+d4d+d3d+d2d+d1d;

    cout<<sum<<endl;

    return 0;
}
