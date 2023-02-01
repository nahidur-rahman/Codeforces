#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, a[10];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>a[i];
        n=10-n;
        cout<<(n*(n-1)*3)<<endl;
    }
    return 0;
}
