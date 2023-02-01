#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[105], cntODD=0, cntEVEN=0, indODD, indEVEN;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2==0){
            cntEVEN++;
            indEVEN=i+1;
        }
        else{
            cntODD++;
            indODD=i+1;
        }
    }
    if(cntEVEN==1){
        cout<<indEVEN<<endl;
    }
    else
        cout<<indODD<<endl;
    return 0;
}
