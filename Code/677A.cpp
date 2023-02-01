#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, a, temp=0;
    cin>>n>>h;
    while(n--)
    {
        cin>>a;
        if(a>h)
            temp++;
        temp++;
    }
    cout<<temp<<endl;

    return 0;
}
