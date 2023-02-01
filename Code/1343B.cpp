#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, se=0, so=0;
        cin>>n;
        if(n%4!=0)
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i=2; i<=n; i+=2){
                cout<<i<<" ";
                se+=i;
            }
            for(int i=1; i<n-1; i+=2){
                cout<<i<<" ";
                so+=i;
            }
            se=se-so;
            cout<<se<<endl;
        }
    }
    return 0;
}
