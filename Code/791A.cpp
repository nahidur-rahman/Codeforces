#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, i, temp=0;

    cin>>a>>b;

    for(i=1; i<10; i++)
    {
        a=3*a;
        b=2*b;
        temp++;
        if(a>b)
            break;
    }

    cout<<temp<<endl;

    return 0;
}
