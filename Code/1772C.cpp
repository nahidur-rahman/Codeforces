#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>k>>n;
        int a[k+1], dif;
        dif=n-k;
        if(dif==0){
            for(int i=1; i<=k; i++)
                cout<<i<<" ";
            cout<<endl;
            continue;
        }
        int x=0;
        a[0]=1;
        for(int i=1; i<k; i++){
            if(x<=dif)
                x++;
            else
                x=0;
            a[i]=x+i;
        }
        for(int i=1; i<=k; i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
