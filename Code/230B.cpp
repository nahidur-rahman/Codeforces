#include<bits/stdc++.h>
using namespace std;

int main()
{
    int prime[1000000]={0};
    for(int i=2; i<=1000000; i++){
        if(prime[i]==0){
            for(int j=2; i*j<=1000000; j++){
                prime[i*j]=1;
            }
        }
    }

    long long int t, n, sq;
    cin>>t;
    while(t--){
        cin>>n;
        sq = sqrt(n);
        if(sq*sq == n && prime[sq]==0 && n!=1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}


