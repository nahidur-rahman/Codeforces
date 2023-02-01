#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int m, sum, a[101];
        cin>>m>>sum;
        for(int i=0; i<m; i++)
            cin>>a[i];
        sort(a, a+m);
        int n=1, i=0, cnt=m;
        while(sum){
            if(a[i]!=n){
                a[cnt++]=n;
                sum-=n;
                if(i<m)
                    i--;
            }
            n++;
            i++;
        }
        int temp=1, n1=1;
        sort(a, a+cnt);
        for(int i=0; i<cnt; i++){
            if(a[i]!=n1)
                temp=0;
            n1++;
        }
        if(temp)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
