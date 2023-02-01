#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l, i;
    string s, t;

    cin>>s>>t;

    l=s.length();

    for(i=0; i<l; i++)
    {
        if(s[i]!=t[l-i-1])
        {
            cout<<"NO"<<endl;
            goto shes;
        }
    }

    cout<<"YES"<<endl;

    shes:

    return 0;
}
