#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, j;
    string s;
    cin>>s;
    n=s.size();

    for(i=0; i<n; i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i=i+2;
            if(i>2)
                cout<<" ";
        }
        else
        {
            cout<<s[i];
        }

    }


    return 0;
}
