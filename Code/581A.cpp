#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, sml, big, dif, same;

    cin>>a>>b;

    if(a>b)
    {
        big=a;
        sml=b;
    }
    else
    {
        big=b;
        sml=a;
    }

    dif=sml;
    same=(big-sml)/2;

    cout<<dif<<" "<<same<<endl;

    return 0;
}
