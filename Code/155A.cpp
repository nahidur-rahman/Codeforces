#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[1005], minn, maxx, cnt=0;
    cin>>n;
    cin>>a[0];
    minn=a[0];
    maxx=a[0];
    for(int i=1; i<n; i++){
        cin>>a[i];
        if(a[i]>maxx){
            cnt++;
            maxx=a[i];
        }
        if(a[i]<minn){
            cnt++;
            minn=a[i];
        }
    }
    cout<<cnt<<endl;
    return 0;
}
