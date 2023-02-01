#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, temp=0, h=0, e=0, l=0;
    string s;
    cin>>s;
    n=s.size();

    for(i=0; i<n; i++)
    {
        if(s[i]=='h')
            h++;
        if(h>0 && s[i]=='e')
            e++;
        if(e>0 && s[i]=='l')
            l++;
        if(l>1 && s[i]=='o')
            temp=1;
    }

    if(temp)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}
