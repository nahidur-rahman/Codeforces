#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n>>q;
        long long int a[n+1], sum;
        for(int i=0; i<n; i++)
            cin>>a[i];
        int type, qq;
        for(int i=0; i<q; i++){
            cin>>type>>qq;
            sum=0;
            for(int j=0; j<n; j++){
                if((type==0 && a[j]%2==0) || (type==1 && a[j]%2==1)){
                    a[j]+=qq;
                }
                sum+=a[j];
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
