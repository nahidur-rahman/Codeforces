#include<bits/stdc++.h>
using namespace std;

int main()
{
    int yr, ek, dos, shot, haj, n;

    cin>>yr;

    yr=yr+1;

    shuru:

    n=yr;

    ek=n%10;
    n=n/10;

    dos=n%10;
    n=n/10;

    shot=n%10;
    n=n/10;

    haj=n;

    if(ek!=dos && ek!=shot && ek!=haj && dos!=shot && dos!=haj && shot!=haj)
    {
        cout<<yr<<endl;
        goto shes;
    }
    else
    {
        yr++;
        goto shuru;
    }



    shes:

    return 0;
}
