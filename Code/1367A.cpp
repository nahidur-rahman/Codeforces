#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s, s1="";
        cin>>s;
        int l=s.length();
        s1+=s[0];
        for(int i=1; i<l-1; i+=2){
            s1+=s[i];
        }
        s1+=s[l-1];
        cout<<s1<<endl;
    }
    return 0;
}
