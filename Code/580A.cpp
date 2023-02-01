#include<iostream>
using namespace std;

int main()
{
    int n, mx=0, count=1;
    cin>>n;
    int a[n+1];
    cin>>a[0];
    for(int i=1; i<n; i++){
        cin>>a[i];
        if(a[i]<a[i-1]){
            mx=max(count, mx);
            count=1;
        }
        else
            count++;
    }
    mx=max(count, mx);
    cout<<mx<<endl;
    return 0;
}
