#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, cnt=0, i=1, a[10];
        cin>>n;
        while(n){
            if(n%10!=0)
                a[cnt++]=n%10*i;
            i*=10;
            n/=10;
        }
        cout<<cnt<<endl;
        for(int j=0; j<cnt; j++)
            cout<<a[j]<<" ";
        cout<<endl;
    }
    return 0;
}
