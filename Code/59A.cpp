#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, low=0, up=0, l;
    string s;

    cin>>s;

    l=s.length();

    for(i=0; i<l; i++)
        if(islower(s[i]))
            low++;

    for(i=0; i<l; i++)
        if(isupper(s[i]))
            up++;

    if(up<=low)
        for(i=0; i<l; i++)
            s[i]=towlower(s[i]);
    else
        for(i=0; i<l; i++)
            s[i]=towupper(s[i]);

    cout<<s<<endl;

    return 0;
}
