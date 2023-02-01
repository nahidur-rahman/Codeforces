#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w, i, mov, j;
        cin>>w;
        int cs[w];
        for(i=0; i<w; i++)
            cin>>cs[i];
        for(i=0; i<w; i++)
        {
            cin>>mov;
            string rot;
            for(j=0; j<mov; j++)
            {
                cin>>rot[j];
                if(rot[j]=='U')
                    cs[i]--;
                if(rot[j]=='D')
                    cs[i]++;
            }
            if(cs[i]>9)
                cs[i]=cs[i]%10;
            if(cs[i]<0)
                cs[i]=10+cs[i];
            cout<<cs[i]<<" ";
        }

    }



    return 0;
}
