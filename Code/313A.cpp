#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, d1, d2, m1;

    cin>>n;

    if(n>0)
        cout<<n<<endl;
    else if(n<0 && n>-100)
    {

        d1=n/10;
        n=n%10;

        if(n>d1)
            cout<<n<<endl;
        else
            cout<<d1<<endl;
    }

    else
    {
        d1=n/10;
        m1=n%10;
        d2=d1/10;
        n=(d2*10)+m1;
        if(n>d1)
            cout<<n<<endl;
        else
            cout<<d1<<endl;
    }

    return 0;
}
