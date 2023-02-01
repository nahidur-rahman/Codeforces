#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, a, b, c, temp=0;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if(a==0&&b==0||c==0&&b==0||a==0&&c==0)
        {
            continue;
        }
        else
            temp++;
    }

    cout<<temp<<endl;

    return 0;
}
