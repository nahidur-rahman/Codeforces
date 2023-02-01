#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a, b, dis, ans;
        cin>>a>>b;
        if(a>b)
            dis=a-b;
        else
            dis=b-a;
        if(dis==0)
            cout<<0<<endl;
        else if(dis<=10)
            cout<<1<<endl;
        else{
            if(dis%10==0){
                dis=dis/10;
                cout<<dis<<endl;
            }
            else{
                dis=dis/10;
                cout<<dis+1<<endl;
            }
        }
    }
    return 0;
}
