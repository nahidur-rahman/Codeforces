#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1], b[n+1];
        for(int i=0; i<n; i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b, b+n);
        int max1=b[n-1], max2=b[n-2];
        for(int i=0; i<n; i++){
            if(a[i]==max1)
                cout<<a[i]-max2<<" ";
            else
                cout<<a[i]-max1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
