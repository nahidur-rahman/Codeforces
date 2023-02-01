#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, x[5][5], row, col, r1, c1, ans;

    for(i=0; i<5; i++)
        for(j=0; j<5; j++)
        {
            cin>>x[i][j];
            if(x[i][j]==1)
            {
                row=i+1;
                col=j+1;
            }
        }

    if(row<=3)
        r1=3-row;
    else
        r1=row-3;

    if(col<=3)
        c1=3-col;
    else
        c1=col-3;

    ans=r1+c1;

    cout<<ans<<endl;

    return 0;
}
