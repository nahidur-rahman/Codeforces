#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, c1=0;
        string s;
        cin>>n>>s;
        if(s[0]=='1')
            c1++;
        for(int i=1; i<n; i++){
            if(s[i]=='1')
                c1++;
            if(c1%2==0 && c1!=0){
                cout<<"-";
                c1=0;
            }
            else
                cout<<"+";
        }
        cout<<endl;
    }//01101 +-++
    return 0;
}
