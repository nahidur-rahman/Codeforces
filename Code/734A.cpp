#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n, i, ant=0, dan=0;
    string s;


    cin>>n;

    cin>>s;

    for(i=0; i<n; i++)
    {
        if(s[i]=='A')
            ant++;
        else
            dan++;
    }

    if(ant>dan)
        cout<<"Anton"<<endl;
    else if(dan>ant)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;

    return 0;
}
