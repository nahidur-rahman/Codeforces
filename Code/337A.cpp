#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, arr[55], minn=1e8;
    cin>>n>>m;
    for(int i=0; i<m; i++)
        cin>>arr[i];
    sort(arr, arr+m);
    for(int i=n-1; i<m; i=i+1)
        minn=min(minn, arr[i]-arr[i+1-n]);
    cout<<minn<<endl;
}
