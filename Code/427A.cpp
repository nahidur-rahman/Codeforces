#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1], cnt=0, p=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==-1){
            if(p==0)
                cnt++;
            else
                p--;
        }
        else
            p+=a[i];
    }
    cout<<cnt<<endl;
    return 0;
}
