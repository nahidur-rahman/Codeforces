#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, l;
    string s;

    cin>>s;

    l=s.length();

    for(i=0; i<l; i++)
        s[i]=towlower(s[i]);

    for(i=0; i<l; i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y')
        {
            cout<<"."<<s[i];
        }
    }

    cout<<endl;

    return 0;
}
