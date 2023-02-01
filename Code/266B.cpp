#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, cnt=0;
    string s;
    cin>>n>>t>>s;
    for(int i=0; i<t; i++){
        for(int j=0; j<n; j++){
            if(j+1<n && s[j]=='B' && s[j+1]=='G'){
                s[j]='G';
                s[j+1]='B';
                j++;
            }

        }
        //cout<<cnt++<<" "<<s<<endl<<endl;
    }
    cout<<s<<endl;
    return 0;
}
