#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, cnt1=0, cnt=0, a;
    cin>>n>>k;
    k=5-k;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a<=k)
            cnt1++;
        if(cnt1==3){
            cnt1=0;
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}

