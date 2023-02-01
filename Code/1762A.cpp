#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, sum=0, cnt=0;
        cin>>n;
        int a[n+1];
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum += a[i];
        }
        if(sum%2==0){
            cout<<cnt<<endl;
            continue;
        }
        sort(a, a+n);

        if(a[0] % 2 == 0){
            while(a[0]%2==0){
                a[0]/=2;
                cnt++;
            }
        }
        else{
            while(a[0]%2==1){
                a[0]/=2;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
