#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, h[35], a[35], cnt=0;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>h[i]>>a[i];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j)
                continue;
            if(h[i]==a[j])
                cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}

