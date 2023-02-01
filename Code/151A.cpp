#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np, mn=1e8;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    k=(k*l)/nl;
    c=c*d;
    p=p/np;
    mn=(min(k, min(c, p)))/n;
    cout<<mn<<endl;
    return 0;
}
