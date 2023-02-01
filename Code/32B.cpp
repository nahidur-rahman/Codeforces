#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l, a[205], cnt=0;
    string s;
    cin>>s;
    l=s.length();
    for(int i=0; i<l; i++){
        if(i+1<l && s[i]=='-' && s[i+1]=='-'){
            a[cnt++]=2;
            i++;
        }
        else if(i+1<l && s[i]=='-' && s[i+1]=='.'){
            a[cnt++]=1;
            i++;
        }
        else{
            a[cnt++]=0;
        }
    }
    for(int i=0; i<cnt; i++)
        cout<<a[i];
    cout<<endl;
    return 0;
}
