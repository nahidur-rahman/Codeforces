#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, temp=0;
        string s;
        cin>>n>>s;
        for(int i=1; i<n; i+=3){
            if(i+1<n && s[i]==s[i+1]){
                temp=1;
            }
            else
                temp=0;
        }

        if(n==1 || temp)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
