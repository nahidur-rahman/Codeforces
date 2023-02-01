#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l, i, temp=0, temp1=0;
    string s, s1, s2;

    cin>>s;

    s1=s;
    s2=s;

    l=s.length();

    for(i=1; i<l; i++)
        if(islower(s[i]))
            temp++;

    for(i=0; i<l; i++)
        if(isupper(s[i]))
            temp1++;

    if(temp1==l)
        for(i=0; i<l; i++)
            s2[i]=towlower(s2[i]);


    s[0]=towupper(s[0]);

    for(i=1; i<l; i++)
        s[i]=towlower(s[i]);


    if(temp!=0)
        cout<<s1<<endl;
    else if(temp1==l)
        cout<<s2<<endl;
    else
        cout<<s<<endl;

    return 0;
}
