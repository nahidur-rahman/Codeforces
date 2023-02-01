#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, x, flag=1;
        cin>>n;
        map<int, int> m;
        for(int i=0; i<n; i++){
            cin>>x;
            if(m[x]==0)
                m[x]++;
            else
                flag=0;
        }
        if(flag)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
