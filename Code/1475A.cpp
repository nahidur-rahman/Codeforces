#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if((n&(n-1)) == 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
