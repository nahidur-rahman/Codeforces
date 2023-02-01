#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s, n, flag=1, x, y;
    multimap<int, int> m;

    cin>>s>>n;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        m.insert({x, y});
    }

    for(auto it: m){
        if(s>it.first){
            s+=it.second;
            //cout<<"----> "<<s<<endl;
        }
        else{
            flag=0;
            //cout<<it.first<<"  "<<it.second<<endl;
        }
    }

    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
