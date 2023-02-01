#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n>>s;
        char ch='Z';
        for(int i=0; i<n; i++){
            if(s[i]>=ch)
                ch=s[i];
        }
        cout<<(ch-'a')+1<<endl;
    }
    return 0;
}
