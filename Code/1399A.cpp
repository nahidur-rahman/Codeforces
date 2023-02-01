#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, a[55], temp=1;
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a, a+n);
        for(int i=1; i<n; i++){
            if(a[i]-a[i-1]!=0 && a[i]-a[i-1]!=1){
                temp=0;
                break;
            }
        }
        if(temp)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
