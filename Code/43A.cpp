#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt1=1, cnt2=0;
    cin>>n;
    string s2, s1, s;
    cin>>s1;
    for(int i=1; i<n; i++){
        cin>>s;
        if(s==s1)
            cnt1++;
        else{
            cnt2++;
            s2=s;
        }
    }
    if(cnt1>cnt2)
        cout<<s1<<endl;
    else
        cout<<s2<<endl;

    return 0;
}
