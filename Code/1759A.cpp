#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]=='e')
            s="Y"+s;
        else if(s[0]=='s')
            s="Ye"+s;
        int l=s.length(), temp=1;
        for(int i=0; i<l; i++){
            char c;
            if(i%3==0)
                c='Y';
            else if(i%3==1)
                c='e';
            else
                c='s';
            if(s[i]!=c)
                temp=0;
        }
        if(temp)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
