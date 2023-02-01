#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[105], mx=-1, cnt=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
        mx=max(mx, a[i]);
    }
    for(int i=0; i<n; i++){
        cnt+=(mx-a[i]);
    }
    cout<<cnt<<endl;
    return 0;
}
