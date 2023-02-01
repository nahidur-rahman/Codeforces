#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, x, temp=0, mul, c1=0, cnt=0;;

    cin>>n>>x;

    temp=x;
    while(temp){
        c1++;
        temp/=10;
    }
    if(c1==1)
        c1++;
    int val=0;
    for(int i=1; i<=c1; i++){
        val=val*10+1;
    }
    if(n>val)
        n=val;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        {
            mul=i*j;
            if(mul==x)
                cnt++;
        }

    cout<<cnt<<endl;

    return 0;
}
