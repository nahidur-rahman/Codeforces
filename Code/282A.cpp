#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x=0, i;

    cin>>n;


    for(i=0;i<n;i++)
    {
        string s;
        cin>>s;

        if(s[1]=='+'&&s[2]=='+')
            x++;
        else if(s[1]=='-'&&s[2]=='-')
            x--;
        else if(s[0]=='+'&&s[1]=='+')
            ++x;
        else if(s[0]=='-'&&s[1]=='-')
            --x;
    }

    cout<<x<<endl;

    return 0;

}
