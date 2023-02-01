#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int cnt=0,div=0;
            if(n==1)
                cnt+=2;
            else if(n%3==0)
            {
                cnt=n/3;
                n=0;
            }
            else
            {
                div=n/3;
                cnt+=div;
                n%=3;
                if(n%2==0)
                {
                    cnt++;
                    n/=2;
                }
                else
                    cnt++;
                n=0;
            }

        cout<<cnt<<endl;
    }

    return 0;
}
